/*���ڱȽϣ����������֮����ת����
��Ŀ����

����һ��������CDate���������ԣ��ꡢ�¡��գ�����������
���캯�������������������ǰ�λ������Ĭ��ֵΪ0��ʵ������תΪ�������ͣ��������Ϊ20170612��תΪyear = 2017, month = 6, day = 12
ʵ��ת����������أ�����������תΪ����������2017��6��8��תΪ20170608��ע�⣬����»���С��10��ת��Ϊ����ʱҪ��0
ʵ�����ڵ��������print�������ʽ��ʾ������
 
���������£������޸ģ���ʵ�������������
int main()
{
	int t, t1, t2;
	CDate c1, c2;
	cin >> t;
	while (t--)
	{
		cin >> t1 >> t2;
		c1 = t1;
		c2 = t2;
		((c1 > c2) ? c1 : c2).print(); //���ڴ��������ڴ���c1 > c2�У����Զ���c1��c2ת��Ϊ�������бȽ�
	}
	return 0;
}
 
ע�⣺����Ŀ����ҪҲ��Ҫ����>�������ֻҪʵ��ת����������أ��ܹ�����������תΪ�����Ϳ�����
 


����

��һ������t��ʾ��t������

����ÿ����������������

����t��

 


���

ÿ�����һ�������У����ڴ����Ϣ

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
20170625
20160528
19981111
20021212

�������1
2017��06��25��
2002��12��12��

*/
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class CDate
{
public:
	CDate(int num=0)
	{
		for (int i = 0; i < 2; i++)
		{
			day = day + (num % 10) * pow(10, i);
			num = num / 10;
		}
		for (int i = 0; i < 2; i++)
		{
			month = month + (num % 10) * pow(10, i);
			num = num / 10;
		}
		for (int i = 0; i < 4; i++)
		{
			year = year + (num % 10) * pow(10, i);
			num = num / 10;
		}
	}
	operator int()
	{
		int sum=year*10000;
		int m = month;
		int n = day;
		int temp = m % 10;
		sum = sum + temp * 100;
		temp = ((m / 10) % 10);
		sum = sum + temp * 1000;
		temp = n % 10;
		sum = sum + temp;
		temp = (n / 10) % 10;
		sum = sum + temp * 10;
		return sum;
	}
	void print()
	{
		cout << year << "��" << setw(2) << setfill('0') << month <<"��"<< setw(2) << setfill('0')<<day<<"��"<< endl;
	}
private:
	int year=0;
	int month=0;
	int day=0;
};
int main()
{
	int t, t1, t2;
	CDate c1, c2;
	cin >> t;
	while (t--)
	{
		cin >> t1 >> t2;
		c1 = t1;
		c2 = t2;
		((c1 > c2) ? c1 : c2).print(); //���ڴ��������ڴ���c1 > c2�У����Զ���c1��c2ת��Ϊ�������бȽ�
	}
	return 0;
}
