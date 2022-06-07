/*����ʱ��ϲ��������Ԫ������
��Ŀ����

��֪������Date�������ԣ��ꡢ�¡��գ�������Ա����������Ҫ���б�д��ע�����û������ĳ�Ա����
��֪ʱ����Time�������ԣ�ʱ���֡��룬������Ա����������Ҫ���б�д��ע�����û������ĳ�Ա����
���ڱ�дһ��ȫ�ֺ�����ʱ������ڵĶ���ϲ�����һ�������
����ԭ��Ϊ��void display(const Date &d, const Time &t)
�������Ҫ��Ϊ��
1��ʱ����������ȹ̶�2λ������2λ��0
2�����������ȹ̶�Ϊ4λ���º��յ�������ȹ̶�2λ������2λ��0
����2017��3��3��19ʱ5��18��
�����Ϊ��2017-03-03 19:05:18
 
����Ҫ��
1���Ѻ���display��Ϊʱ���ࡢ���������Ԫ
2���ֱ𴴽�һ�����ڶ����ʱ����󣬱������ڵ������ʱ�������
3������display����ʵ�����ں�ʱ��ĺϲ����
 
 


����

��һ������t��ʾ��t��ʾ��

����һ������������������ʾ������

�ٽ���һ������������������ʾʱ����

��������t��ʾ��

 

 


���

ÿ�����һ�����ں�ʱ��ϲ�������

���t��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
2017 3 3
19 5 18
1988 12 8
5 16 4

�������1
2017-03-03 19:05:18
1988-12-08 05:16:04

*/
#include <iostream>
#include <math.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Time;
class Date
{
private:
	int year;
	int month;
	int day;
	friend void display(const Date& d, const Time& t);
public:
	Date(int a,int b,int c):year(a),month(b),day(c){}
};
class Time
{
private:
	int hour;
	int minute;
	int second;
public:
	Time(int a, int b, int c) :hour(a),minute(b), second(c) {}
	friend void display(const Date& d, const Time& t);

};
void display(const Date& d, const Time& t)
{
	cout << setw(4) << setfill('0') << d.year << "-" << setw(2) << setfill('0') << d.month << "-" <<setw(2) << setfill('0')<<d.day << " "
		<< setw(2) << setfill('0') << t.hour << ":" << setw(2) << setfill('0') << t.minute << ":" << setw(2) << setfill('0') << t.second << endl;

}
int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int year, month, day, hour, minute, second;
		cin >> year >> month >> day >> hour >> minute >> second;
		Date a(year, month, day);
		Time b(hour, minute, second);
		display(a, b);
	}
	return 0;
}
