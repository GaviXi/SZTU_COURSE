/* �����ඨ�壨�������
��Ŀ����

����һ��������CAccount������������ʺţ�account, long����������name,char[10])����balance,float�������ݳ�Ա������ʵ�ִ�deposit,�����ɹ���ʾ��saving ok!��)��ȡ�withdraw�������ɹ���ʾ��withdraw ok!�����Ͳ�ѯ��check���Ĳ�����ȡ�����������Χ�ڣ�������ʾ��sorry! over limit!������д�����������������Ķ��󲢲��ԣ������˺š����������󣬰��ղ�ѯ������ѯ��ȡ���ѯ����˳������෽���������


����

��һ�����۵��˺š����������

�����

ȡ����

�ڶ������۵��˺š����������

�����

ȡ����


���

��һ�����۵��˻����

���������

�˻����

ȡ��������

�˻����

�ڶ������۵��˻����

���������

�˻����

ȡ��������

�˻����


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
9111 Tom 1000
500
1000
92220 John 500
500
1500
�������1
Tom's balance is 1000
saving ok!
Tom's balance is 1500
withdraw ok!
Tom's balance is 500
John's balance is 500
saving ok!
John's balance is 1000
sorry! over limit!
John's balance is 1000

*/
#include<iostream>
#include<string.h>
using namespace std;
class CAccount
{
public:
	void deposit(float money)
	{
		balance +=money;
		cout << "saving ok!"<<endl;
	}
	void withdraw(float money)
	{
		if (balance >= money)
		{
			balance -=money;
			cout << "withdraw ok!"<<endl;
		}
		else
		{
			cout << "sorry! over limit!" << endl;
		}
	}
	void check()
	{
		cout << name << "'s balance is " << balance << endl;
	}
	void input(long a, char b[], float c)
	{
		account = a;
		strcpy(name, b);
		balance = c;
	}
private:
	long account;
	char name[10];
	float balance;
};

int main()
{

	int i;
	for (i = 0; i < 2; i++)
	{
		long a;
		char b[10];
		float c;
		float up, down;
		CAccount people;
		cin >> a >> b >> c;
		people.input(a, b, c);
		people.check();
		cin >> up;
		people.deposit(up);
		people.check();
		cin >> down;
		people.withdraw(down);
		people.check();
	}
	return 0;
}
