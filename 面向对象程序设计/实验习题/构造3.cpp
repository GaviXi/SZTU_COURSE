/*���������������(�������캯��)
��Ŀ����

ĳ�������һ���������ݳ�Ա.��������ʱ������0��ʾ��ȱʡ��ʽ����һ�������;����1��һ��������ʾ�ô�һ�������Ĺ��캯������һ�������;����2��һ��������ʾ����2�������һ��������Ĳ������죬��һ����ǰһ�������졣����ɸ���Ķ����ʵ�֡�


����

�������ݵ����� t

��һ����

�ڶ�����

......


���

��һ�����������

�ڶ������������

......


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
0
1 10
2 20
�������1
Constructed by default, value = 0
Constructed using one argument constructor, value = 10
Constructed using one argument constructor, value = 20
Constructed using copy constructor, value = 20
*/ 
#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class A
{
private:
	int value;
public:
	A() :value(0)
	{
		cout << "Constructed by default, value = " << value << endl;
	}
	A(int a) :value(a)
	{
		cout << "Constructed using one argument constructor, value = " << value << endl;
	}
	A(A& x)
	{
		value = x.value;
		cout << "Constructed using copy constructor, value = " << value << endl;
	}
};

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		int elect, num;
		cin >> elect;
		if (elect == 0)
		{
			A a;
		}
		else if (elect == 1)
		{
			cin >> num;
			A a(num);
		}
		else if (elect == 2)
		{
			cin >> num;
			A b(num);
			A a(b);
		}
	}
	return 0;
}
