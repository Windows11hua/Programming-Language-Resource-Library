#include <windows.h>
#include <thread>
#include <chrono>


void ShowMessageBox(const wchar_t* message, int delayMilliseconds, UINT uType) {
   
    std::thread([message, delayMilliseconds, uType]() {
    
        MessageBoxW(NULL, message, L"哈哈哈", uType);

      
        std::this_thread::sleep_for(std::chrono::milliseconds(delayMilliseconds));

     
        HWND hwnd = FindWindowW(NULL, L"哈哈哈");

      
        if (hwnd != NULL) {
            SendMessage(hwnd, WM_CLOSE, 0, 0);
        }
        }).detach();  
}

int main() {
   
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONWARNING | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONERROR | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONWARNING | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONERROR | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONWARNING | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONERROR | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONWARNING | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONERROR | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONWARNING | MB_OK);
    Sleep(500);
    ShowMessageBox(L"这个程序没有恶意", 100000, MB_ICONERROR | MB_OK);

    std::this_thread::sleep_for(std::chrono::milliseconds(5000));

    return 0;
}
