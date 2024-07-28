#include <windows.h>
#include <string>
#include <sstream>

// 窗口过程函数
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);

// 计算第n个质数的函数
unsigned long long CalculateNthPrime(int n)
{
    if (n == 1) return 2;
    int count = 1; // 已经找到的质数数量，2是第一个质数
    unsigned long long num = 1;

    while (count < n)
    {
        num += 2; // 检查奇数
        bool isPrime = true;
        for (unsigned long long i = 3; i * i <= num; i += 2)
        {
            if (num % i == 0)
            {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
        {
            count++;
        }
    }
    return num;
}

// WinMain 函数
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    const wchar_t CLASS_NAME[] = L"Sample Window Class";

    WNDCLASS wc = { };

    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    if (!RegisterClass(&wc))
    {
        MessageBox(NULL, L"Window Registration Failed!", L"Error", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    HWND hwnd = CreateWindowEx(
        0,                              // Optional window styles.
        CLASS_NAME,                     // Window class
        L"My First Win32 Application",  // Window text
        WS_OVERLAPPEDWINDOW,            // Window style

        // Size and position
        CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT, CW_USEDEFAULT,

        NULL,       // Parent window    
        NULL,       // Menu
        hInstance,  // Instance handle
        NULL        // Additional application data
    );

    if (hwnd == NULL)
    {
        MessageBox(NULL, L"Window Creation Failed!", L"Error", MB_ICONEXCLAMATION | MB_OK);
        return 0;
    }

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);

    // Run the message loop.
    MSG msg = { };
    while (GetMessage(&msg, NULL, 0, 0))
    {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    return msg.wParam;
}

// 窗口过程函数实现
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
    switch (uMsg)
    {
    case WM_CREATE:
    {
        // 创建按钮
        HWND hwndButton = CreateWindow(
            L"BUTTON",  // 按钮类名
            L"点击计算第2019个质数", // 按钮文本
            WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,  // 按钮样式
            50,         // x 位置
            100,        // y 位置
            200,        // 宽度
            30,         // 高度
            hwnd,       // 父窗口句柄
            (HMENU)1,   // 按钮ID
            (HINSTANCE)GetWindowLongPtr(hwnd, GWLP_HINSTANCE),
            NULL);      // 不需要额外的数据

        if (hwndButton == NULL)
        {
            MessageBox(hwnd, L"Failed to create button!", L"Error", MB_OK | MB_ICONERROR);
            return -1;
        }
    }
    return 0;

    case WM_COMMAND:
    {
        if (LOWORD(wParam) == 1)
        {
            // 按钮被点击，计算第2019个质数
            unsigned long long prime = CalculateNthPrime(2019);

            // 将质数转换为字符串
            std::wostringstream oss;
            oss << L"第2019个质数是： " << prime;
            std::wstring primeStr = oss.str();

            // 显示消息框
            MessageBox(hwnd, primeStr.c_str(), L"答案", MB_OK);
        }
    }
    return 0;

    case WM_DESTROY:
        PostQuitMessage(0);
        return 0;

    case WM_PAINT:
    {
        PAINTSTRUCT ps;
        HDC hdc = BeginPaint(hwnd, &ps);
        // 绘制 "Hello, World!" 文本
        TextOut(hdc, 50, 50, L"你好", 13);
        EndPaint(hwnd, &ps);
    }
    return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}
