/*�����˻�����̬��Ա����Ԫ������
��Ŀ����

�����˻���Ļ����������£�

class Account
{
private:
    static float count; // �˻������
    static float interestRate;
    string accno, accname;
    float balance;
public:
    Account(string ac, string na, float ba);
    ~Account();
    void deposit(float amount); // ���
    void withdraw(float amount); // ȡ��
    float getBalance(); // ��ȡ�˻����
    void show(); // ��ʾ�˻����Ի�����Ϣ
    static float getCount(); // ��ȡ�˻������
    static void setInterestRate(float rate); // ��������
    static float getInterestRate(); // ��ȡ����
};
 

Ҫ�����£�

ʵ�ָ������˻���

Ϊ�˻���Account����һ����Ԫ������ʵ���˻���Ϣ��Ҫ�������Ϣ�������Ϣ���=�˻����+�˻����*���ʣ�����Ԫ����������ʽΪ friend void update(Account& a);

��main�����У�����һ��Account���͵�ָ�����飬��ÿ��ָ��ָ��̬�����Account���󣬲����ó�Ա�������Դ�ȡ���ʾ�Ⱥ������ٵ�����Ԫ�������Խ��н�Ϣ��

��ҿ��Ը���ʵ�������������������������Ҳ�����޸ĳ�Ա�����Ĳ�������

 

 

 


����

��1�У�����
��2�У��˻���Ŀn
��3�п�ʼ��ÿ����������һ���˻��ġ��˺š��������������������������ȡ������


���

��1�п�ʼ��ÿ�����һ���˻��������Ϣ�������˺š�������������������Ϣ��ȡ�����

���һ����������˻�����

 

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
0.01
3
201501 ���� 10000 1000 2000
201502 ���� 20000 2000 4000
201503 ���� 80000 4000 6000
�������1
201501 ���� 11000 11110 9110
201502 ���� 22000 22220 18220
201503 ���� 84000 84840 78840
106170
*/
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
class Account
{
private:
    static float count; // �˻������
    static float interestRate; // ����
    string accno, accname;//�˺ţ�����
    float balance;// �����˻����
public:
    Account(){}
    Account(string ac, string na, float ba) :accno(ac), accname(na), balance(ba)
    {
        count = count + balance;
    }
    ~Account()
    {
        count = count - balance;
    }
    void putaccno(string a)
    {
        accno = a;
    }
    void putname(string a)
    {
        accname = a;
    }
    void putbalance(float a)
    {
        balance = a;
        count = count + a;
    }
    void deposit(float amount)
    {
        balance = balance + amount;
        count = count + amount;
    }
    void withdraw(float amount)
    {
            balance = balance - amount;
            count = count - amount;
    }
    float getBalance()// ��ȡ�˻����
    {
        return balance;
    }
    void show()
    {
        cout << accno << " " << accname << " ";
    }
    static float getCount() // ��ȡ�˻������
    {
        return count;
    }
    static void setInterestRate(float rate) // ��������
    {
        interestRate = rate;
    }
    static float getInterestRate()// ��ȡ����
    {
        return interestRate;
    }
    friend void update(Account& a);
};
float Account::count = 0;
float Account::interestRate = 0;
void update(Account& a)
{
    a.count = a.count - a.balance;
    a.balance = (a.balance + a.balance * a.interestRate);
    a.count = a.count + a.balance;
    cout << a.balance << " ";
}
int main(void)
{
    int t, i;
    float interest;
    cin >> interest;
    cin >> t;
    Account* p = new Account[t];
    p->setInterestRate(interest);
    for (i = 0; i < t; i++)
    {
        string accno, accname;
        float money;
        cin >> accno >> accname >> money;
        (p + i)->putaccno(accno);
        (p + i)->putname(accname);
        (p + i)->putbalance(money);
        float addmoney,outmoney;
        cin >> addmoney;
        cin >> outmoney;
        (p + i)->show();
        (p + i)->deposit(addmoney);
        cout << (p + i)->getBalance()<<" ";
        update(*(p + i));
        (p + i)->withdraw(outmoney);
        cout << (p + i)->getBalance() << endl;
    }
    cout << p->getCount() << endl;
    return 0;
}
