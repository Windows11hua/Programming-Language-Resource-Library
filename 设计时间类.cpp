#include <iostream>
using namespace std;
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int h = 0, int m = 0, int s = 0);					//��Ĭ�ϲ���ֵ�Ĺ��캯��
	void showtime();
	Time add(int s);										//��������
	int interval(const Time& t);							//�������ʱ�������룩
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
	if (temp.second >= 60)									//�������Ӽӵ�minute
	{
		temp.minute = minute + temp.second / 60;
		temp.second = temp.second % 60;
	}
	if (temp.minute >= 60)									
	{
		temp.hour = hour + temp.minute / 60;
		temp.minute = temp.second % 60;
	}
	if (temp.hour >= 24)									//����24ʱ����24����
	{
		temp.hour -= 24;
	}
	return temp;
}
int Time::interval(const Time& t)								//��������ʱ��֮��
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