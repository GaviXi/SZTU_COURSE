/*���ֵļӷƣ��������+���飩
��Ŀ����

��һȺèè��ÿֻè�����Լ������ƺ����ء�
����������è�����ƺ����ض���˽�����ԣ�Ҫ��������Ե�get��������������������Ҫ�Լ�����
 
����һ����̬��è�������飬�洢��ֻè�����ƺ�����
����è�����ض��������������򣬲���������ÿֻè������
 
��Ŀ�漰����ֵ������������
 


����

��һ������n��ʾ��nֻè
�ڶ�������һֻè�����ƺ����أ����Ƶ���󳤶�Ϊ30
��������n��
 


���

���һ�У����������è������

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
4
�ɿ��������� 1500
����ˮ�ݰ��� 400
֥ʿ��������� 3000
�߲�ɳ�������� 200

�������1
�߲�ɳ�������� ����ˮ�ݰ��� �ɿ��������� ֥ʿ���������

*/
#include<iostream>
#include<string.h>
#include <algorithm>
using namespace std;
class Cat
{
public:
	void get(char a[], int b)
	{
		strcpy(name, a);
		weight = b;
	}
	int WEIGHT()
	{
		return weight;
	}
	char* NAME()
	{
		return name;
	}
private:
	char name[30];
	int weight;
};

int compare(Cat q, Cat p)
{
	return q.WEIGHT() < p.WEIGHT();
}

int main()
{
	int n, i;
	cin >> n;
	Cat* cat = new Cat[n];
	for (i = 0; i < n; i++)
	{
		char name[30];
		int weight;
		cin >> name >> weight;
		(cat + i)->get(name, weight);
	}
	sort(cat, cat + n, compare);
	for (i = 0; i < n-1; i++)
	{
		cout << (cat + i)->NAME()<<" ";
	}
	cout << (cat + n - 1)->NAME() << endl;
}
