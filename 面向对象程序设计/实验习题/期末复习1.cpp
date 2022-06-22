/*
 ��λ���λ���麯���Ͷ�̬��
��Ŀ����

ĳСѧ���꼶����ѧ��ʦ�ڽ�ѧ�������Ӽ�������ʱ���֣����ϵ�ͬѧ���Էֳ����࣬��һ�������ȷ����ɼӼ�������(GroupA)���ڶ��������ȷ����ɼӷ����㣬�����ڼ���������˵���������ǽ�λ�Ĵ���(GroupB)���������������Ǽӷ��Ľ�λ��Ҳ�������Ǽ����Ľ�λ(GroupC)������ʾ��Сѧ���꼶��ûѧ��������

������ģ�⵱��ʦ�ڿ�������ĳλͬѧʱ��ͬѧ������Ļش�

ʵ��ʱ���������Ļ����ܣ�

class Group
{
public:
	virtual int add(int x, int y) = 0; // ����ӷ���������
	virtual int sub(int x, int y) = 0; // ���������������
}
������GroupA, GroupB��GroupC����������:

����д��������Ҫ������������һ������Groupָ�룬ͨ����ָ��ͳһ�ؽ���add��sub���㡣

 


����

��һ�б�ʾ���Դ������ӵڶ��п�ʼ��ÿ����������ռһ�У�ÿ�������������£�ѧ�����1Ϊ��һ��ѧ����2Ϊ�ڶ���ѧ����3Ϊ������ѧ��������һ�������ڶ�������

 


���

�����Ľ��


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
1 79+81
2 81-79
3 183+69
�������1
160
12
142

*/
#include <iostream>
#include<cmath>
using namespace std;
int leng(int a)
{
	int i = 0;
	while (a / 10 != 0)
	{
		i++;
		a = a / 10;
	}
	return i;
}
class Group
{
public:
	Group() {};
	virtual int add(int x, int y) = 0; // ����ӷ���������
	virtual int sub(int x, int y) = 0; // ���������������
};
class GroupA :public Group
{
public:
	GroupA() {};
	int add(int x, int y)
	{
		return x + y;
	}
	int sub(int x, int y)
	{
		return x - y;
	}
};
class GroupB :public Group
{
public:
	GroupB() {};
	int add(int x, int y)
	{
		return x + y;
	}
	int sub(int x, int y)
	{
		int a = x;
		int b = y;
		int temp1, temp2;
		int sum = 0;
		for (int i = 0; a!=0||b!=0; i++)
		{
			temp1 = a % 10;
			temp2 = b % 10;
			if (temp1 < temp2)
			{
				sum = sum + (temp1 + 10 - temp2) * pow(10, i);
			}
			else
			{
				sum = sum + (temp1 - temp2) * pow(10, i);
			}
			a = a / 10;
			b = b / 10;
		}
		return sum;
	}
};
class GroupC :public Group
{
public:
	GroupC() {};
	int add(int x, int y)
	{
		int a = x;
		int b = y;
		int temp1, temp2;
		int sum = 0;
		for (int i = 0; a != 0 || b != 0; i++)
		{
			temp1 = a % 10;
			temp2 = b % 10;
			sum = sum + ((temp1 + temp2) % 10)*pow(10,i);
			a = a / 10;
			b = b / 10;
		}
		return  sum;
	}
	int sub(int x, int y)
	{
		int a = x;
		int b = y;
		int temp1, temp2;
		int sum = 0;
		for (int i = 0; a != 0 || b != 0; i++)
		{
			temp1 = a % 10;
			temp2 = b % 10;
			if (temp1 < temp2)
			{
				sum = sum + (temp1 + 10 - temp2) * pow(10, i);
			}
			else
			{
				sum = sum + (temp1 - temp2) * pow(10, i);
			}
			a = a / 10;
			b = b / 10;
		}
		return sum;
	}
};
int main()
{
	int t;
	cin >> t;
	Group* p=NULL;
	while (t--)
	{
		int kind;
		int a, b ;
		char c;
		cin >> kind;
		if (kind == 1)
		{
			cin >> a >> c >> b;
			GroupA h;
			p = &h;
			if (c == '+')
			{
				cout <<p->add(a, b) << endl;
			}
			else if (c == '-')
			{
				cout << p->sub(a, b) << endl;
			}
		}
		else if (kind == 2)
		{
			cin >> a >> c >> b;
			GroupB h;
			p = &h;
			if (c == '+')
			{
				cout << p->add(a, b) << endl;
			}
			else if (c == '-')
			{
				cout << p->sub(a, b) << endl;
			}
		}
		else if (kind == 3)
		{
			cin >> a >> c >> b;
			GroupC h;
			p = &h;
			if (c == '+')
			{
				cout << p->add(a, b) << endl;
			}
			else if (c == '-')
			{
				cout << p->sub(a, b) << endl;
			}
		}
	}
	return 0;
}
