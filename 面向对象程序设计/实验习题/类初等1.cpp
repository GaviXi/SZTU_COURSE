/* �������飨��Ͷ���
��Ŀ����

����������̸���������������һ��������ѧ�����������ĸ����ǧ�����ѧ��������ͬ�������ԣ������ĳ������ѧ����˵����/�������Լ����������ԣ���������רҵ������ͬѧ����Ϣ����ѧԺ�����ͬѧ����ô�����Ƕ���һ������ı�����Student  student; ����������������ѧ�š��Ա�����ѧԺ����ϵ�绰�ȣ��ڳ������й��̣��ѱ���student���費ֵͬ�Ϳ���������ʾ������������ۣ����Զ���һ��ѧ�����飨�����ĸ�Ԫ�ش�С����˼����ʱ�ĸ���������γ�ʼ�����أ�����Ȼ�������ĸ���ͬѧ���������Ը�������ѧ����ʼ������ö���һ�����뺯������Ȼ�������ѧ����������ĸ������������


����

��������Ԫ�صĴ�С

����ÿ������ÿ������ĸ�������ֵ��������ֵ��󳤶Ȳ�����20


���

ÿ�����һ��ѧ������������


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
tom 2013333333 �� �����ѧԺ 13766666666
Marry 2012222222 Ů ��Ϣ����ѧԺ 13555555555
John  2014444444 �� ����ѧԺ 13888888888
�������1
tom
Marry
John
*/
#include<iostream>
#include<string.h>
using namespace std;
class Student
{
public:
	void input(char a[], char b[], char c[], char d[],char e[])
	{
		strcpy(name, a);
		strcpy(number, b);
		strcpy(sex, c);
		strcpy(college, d);
		strcpy(phone, e);
	}
	void print()
	{
		cout << name << endl;
	}
private:
	char name[21];
	char number[21];
	char sex[21];
	char college[21];
	char phone[21];
};

int main()
{
	int t, i;
	cin >> t;
	Student *student = new Student[t];
	for (i = 0; i < t; i++)
	{
		char a[21];
		char b[21];
		char c[21];
		char d[21];
		char e[21];
		cin >> a >> b >> c >> d >> e;
		(student + i)->input(a, b, c, d, e);
	}
	for (i = 0; i < t; i++)
	{
		(student + i)->print();
	}
}
