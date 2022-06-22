/*
 进位与借位（虚函数和多态）
题目描述

某小学二年级的数学老师在教学生整数加减法运算时发现：班上的同学可以分成三类，第一类可以正确地完成加减法运算(GroupA)；第二类可以正确地完成加法运算，但对于减法运算来说，总是忘记借位的处理(GroupB)；第三类总是忘记加法的进位，也总是忘记减法的借位(GroupC)。（提示：小学二年级还没学负数。）

现在请模拟当老师在课堂提问某位同学时，同学会给出的回答。

实现时请基于下面的基类框架：

class Group
{
public:
	virtual int add(int x, int y) = 0; // 输出加法的运算结果
	virtual int sub(int x, int y) = 0; // 输出减法的运算结果
}
构建出GroupA, GroupB和GroupC三个派生类:

并编写主函数，要求主函数中有一个基类Group指针，通过该指针统一地进行add和sub运算。

 


输入

第一行表示测试次数。从第二行开始，每个测试用例占一行，每行数据意义如下：学生类别（1为第一类学生，2为第二类学生，3为第三类学生）、第一个数、第二个数。

 


输出

运算后的结果


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
3
1 79+81
2 81-79
3 183+69
输出样例1
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
	virtual int add(int x, int y) = 0; // 输出加法的运算结果
	virtual int sub(int x, int y) = 0; // 输出减法的运算结果
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
