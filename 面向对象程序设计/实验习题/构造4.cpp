/*�绰������λ(�������캯��)
��Ŀ����

����һ���绰������CTelNumber,����1���ַ�ָ�����ݳ�Ա,�Լ����졢��������ӡ���������캯����

�ַ�ָ�������ڶ�̬����һ���ַ����飬Ȼ�󱣴���������ĵ绰����

���캯���Ĺ�����Ϊ�������ü��������7λ�绰���룬

�������캯���Ĺ�������ԭ��7λ����Ķ�����λΪ8λ�������,Ҳ����˵��������Ķ�����Դ���������.�绰��λ�Ĺ�����ԭ2��3��4��ͷ�ĵ绰����ǰ���8��ԭ5��6��7��8��ͷ��ǰ���2��

ע��:�绰����ֻ��ȫ���������ַ�������������������������Ϊ�Ƿ�)


����

�������ݵ����� t

��һ��7λ����

�ڶ���7λ����

......


���

��һ��������λ��ĺ���

�ڶ���������λ��ĺ���

......

��������������ɹ��������������Ϣ�����忴ʾ��


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
6545889
3335656
565655
�������1
26545889
83335656
Illegal phone number
*/
#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class CTelNumber
{
private:
	char* phone;
public:
	CTelNumber(char* a)
	{
		phone = new char[10];
		strcpy(phone, a);
		phone[9] = '\0';
	}
	CTelNumber(CTelNumber& a)
	{
		phone = new char[10];

		if ('2' <= a.phone[0] && a.phone[0] <= '4')
		{
			char b[10];
			strcpy(b, "8");
			strcpy(phone, strcat(b, a.phone));
		}
		else if ('5' <= a.phone[0] && a.phone[0] < '8')
		{
			char b[10];
			strcpy(b, "2");
			strcpy(phone, strcat(b, a.phone));
		}
	}
	~CTelNumber()
	{
		delete[]phone;
	}
	void print()
	{
		cout << phone << endl;
	}
};
bool judge(char* p)
{
	if (p[0] <= '1' || p[0] >= '9')
		return false;
	int i;
	for (i = 0; i < 8 && p[i] != '\0' && p[i] >= '0' && p[i] <= '9'; i++);
	return i >= 7;
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		char p[10];
		cin >> p;
		if (judge(p))
		{
			CTelNumber a(p);
			CTelNumber b(a);
			b.print();
		}
		else
			cout << "Illegal phone number" << endl;

	}
	return 0;
}
