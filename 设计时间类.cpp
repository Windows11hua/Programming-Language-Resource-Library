#include <iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h = 0, int m = 0, int s = 0);					//有默认参数值的构造函数
	void showtime();
	Time add(int s);										//加若干秒
	int interval(const Time& t);							//与参数的时间间隔（秒）
};
Time::Time(int h, int m, int s)
{
	hour = h;
	minute = m;
	second = s;
}
void Time::showtime()
{
	cout << hour << ":" << minute << ":" << second << endl;
}
Time Time::add(int s)
{
	Time temp;
	temp.second = second + s;
	if (temp.second >= 60)									//将整分钟加到minute
	{
		temp.minute = minute + temp.second / 60;
		temp.second = temp.second % 60;
	}
	if (temp.minute >= 60)									
	{
		temp.hour = hour + temp.minute / 60;
		temp.minute = temp.second % 60;
	}
	if (temp.hour >= 24)									//超过24时，将24减掉
	{
		temp.hour -= 24;
	}
	return temp;
}
int Time::interval(const Time& t)								//返回两个时间之差
{
	int s;
	s = hour * 3600 + minute * 60 + second - t.hour * 3600 - t.minute * 60 - t.second;
	return s;
}
int main()
{
	Time t1(10, 30, 40);
	Time t2(15, 50, 20);
	Time t3;
	cout << t2.interval(t1) << endl;
	t3 = t2.add(35000);
	t1.showtime();
	t2.showtime();
	t3.showtime();
	return 0;
}