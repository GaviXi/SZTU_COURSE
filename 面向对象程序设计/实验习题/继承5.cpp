<<<<<<< HEAD
/*ѧ���ɼ����㣨�̳У�
��Ŀ����

����Person�������������������ԣ��������������Ϣ��display������

ѡ�ޡ�������������ơ��γ̵�ѧ����Person��Ļ����ϣ����������ࣺ�������ͷ�������������̳и����Ա������������Ա����дdisplay������

������������ƽʱ�ɼ������Գɼ��������ɼ��������ԣ������ɼ����ݣ�ƽʱ�ɼ�*40%+���Գɼ�*60%������Ľ����85�֣�����������ΪA��75�֣�������-85�֣���������ΪB��65�֣�������-75�֣���������ΪC��60�֣�������-65�֣���������ΪD��60�֣�������������ΪF��

������ֻ�п��Գɼ��������ɼ��������ԣ������ɼ�100%���ݿ��Գɼ���Ӧ�����ȼ��Ƴɼ���

���������ಢ��д���������������ͷ��ţ�������R������ѧ��������Ϣ��ƽʱ�ɼ��Ϳ��Գɼ�������������������������S������ѧ��������Ϣ�����Գɼ����������������󡣼���ѧ���������ɼ����������

 
=======
/*֧Ʊ�˻����麯�����̬��
��Ŀ����

ĳ���е�֧Ʊ�˻���Ϊ���࣬һ��Ϊ����֧Ʊ�˻�BaseAccount����һ��Ϊ����͸֧�������Ե�BasePlus֧Ʊ�˻���

BaseAccount֧Ʊ�˻�����Ϣ�������ͻ�����(name)���˻�(account)����ǰ����(balance)��BaseAccount֧Ʊ�˻�����ִ�еĲ������������(deposit)��ȡ��(withdraw)����ʾ�˻���Ϣ(display)��ע�⣺ȡ�����͸֧��������ʾ������Ϣ��insufficient����

BasePlus֧Ʊ�˻�������BaseAccount��������Ϣ�⣬������������Ϣ��͸֧����(limit��Ĭ��Ϊ5000)����ǰ͸֧�ܶ�(limitSum)��BasePlus֧Ʊ�˻���ִ�еĲ�����BaseAccount��ͬ���������ֲ�����ʵ�ֲ�ͬ��(1)����ȡ�������������͸֧���޷�Χ��͸֧����������ʾ������Ϣ��insufficient����(2)������ʾ������������ʾBasePlus��������Ϣ��

��ʵ��BaseAccount���BasePlus�࣬����BasePlus��̳���BaseAccount�࣬ע��BaseAccount�˻�������BA��ͷ��BasePlus�˻�������BP��ͷ��

Ҫ��ֻʹ��һ������ָ�룬ָ���������Ķ���Ȼ��ʹ��ָ��������еķ�����
>>>>>>> 5e2661b (week16)


����

<<<<<<< HEAD
���Դ���t

���ÿ������ѧ������ �����Ϣ������������ַ�����Ϊ20
=======
���԰������� t

��һ��������ݣ�

��һ�������˻���Ϣ������ �ʺ� ��ǰ���

�ڶ��������ĸ���������ʾ���˻���˳���ȡ���ȡ��

�ڶ���������ݣ�

.........
>>>>>>> 5e2661b (week16)

 


���

<<<<<<< HEAD
ÿ��ѧ��������Ϣ�������ɼ�

 
=======
���BaseAccount����Ϣ

���BasePlus����Ϣ
>>>>>>> 5e2661b (week16)


�����鿴ģʽ 
������ʾ
�鿴��ʽ
<<<<<<< HEAD
��������
2
R cindy 18 100 100
S sandy 28 59
�������
cindy 18 A
sandy 28 F
*/
#include <iostream>
#include<cmath>
using namespace std;

class Person
{
public:
    Person(char g,string a, int b) :grade(g),name(a), age(b) {}
    void display()
    {
        cout << name << " " << age << endl;
    }
protected:
    string name;
    int age;
    char grade;
};
class rp:public Person
{
public:
    rp(char a,string b,int c,int d,int e):Person(a,b,c)
    {
        pingshi = d;
        kaoshi = e;
        zp= d * 0.4 + e * 0.6;
    }
    void display()
    {
        char ss;
        if (zp >= 85) ss = 'A';
        else if (75 <= zp && zp < 85) ss = 'B';
        else if (65 <= zp && zp < 75) ss = 'C';
        else if (60 <= zp && zp < 65) ss = 'D';
        else if (zp < 60) ss = 'E';
        cout << name << " " << age << " " << ss << endl;
    }

private:
    int pingshi;
    int kaoshi;
    int zp;
};
class sp :public Person
{
public:
    sp(char a, string b, int c, int d) :Person(a, b, c)
    {
        kaoshi = d;
        zp = d;
    }
    void display()
    {
        char ss;
        if (zp >= 85) ss = 'A';
        else if (75 <= zp && zp < 85) ss = 'B';
        else if (65 <= zp && zp < 75) ss = 'C';
        else if (60 <= zp && zp < 65) ss = 'D';
        else if (zp < 60) ss = 'F';
        cout << name << " " << age << " " << ss << endl;
    }

private:
    int kaoshi;
    int zp;
=======
��������1 <-����
4
Tom BA008 1000
1000 2000 1000 1200
Bob BP009 1000
1000 2000 1000 7000
May BA001 2000
500 1000 500 1000
Lily BP002 1000
500 2000 500 3000
�������1
insufficient
Tom BA008 Balance:1000
insufficient
Bob BP009 Balance:1000 limit:5000
May BA001 Balance:1000
Lily BP002 Balance:0 limit:2000

*/
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class BaseAccount
{
protected:
    string name;
    string account;
    int balance;
public:
    BaseAccount(string a,string b,int c):name(a),account(b),balance(c){}
    void deposit(int a)
    {
        balance += a;
    }
    virtual void withdraw(int a)
    {
        if (a > balance) cout << "insufficient" << endl;
        else balance -= a; 
    }
    virtual void display()
    {
        cout << name << " " << account << " Balance:" << balance << endl;
    }
};
class BasePlus :public BaseAccount
{
protected:
    int limit = 5000;
    int limitSum = 0;
public:
    BasePlus(string a, string b, int c) :BaseAccount(a,b,c){}
    void withdraw(int a)
    {
        if (a > balance+limit)
        {
            cout << "insufficient" << endl;
        }
        else
        {
            if (a <= balance)
            {
                balance=balance-a;
            }
            else
            {
                int left = a - balance;
                balance = 0;
                limitSum = left;
                limit = limit - left;
            }
        }
    }
    void display()
    {
        cout << name << " " << account << " Balance:" << balance << " limit:" << limit << endl;
    }
>>>>>>> 5e2661b (week16)
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
<<<<<<< HEAD
        char a;
        cin >> a;
        if (a == 'R')
        {
            string b;
            int c, d, e;
            cin >> b >> c >> d >> e;
            rp A(a, b, c, d, e);
            A.display();
        }
        else if (a == 'S')
        {
            string b;
            int c, d, e;
            cin >> b >> c >>d ;
            sp B(a, b, c, d);
            B.display();
        }
    }
   
=======
        string a, b;
        int c;
        cin >> a >> b >> c;
        if(b[1]=='A')
        {
            BaseAccount abc(a, b, c);
            int d, e;
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            abc.display();
        }
        if (b[1] == 'P')
        {
            BasePlus abc(a, b, c);
            int d, e;
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            cin >> d >> e;
            abc.deposit(d);
            abc.withdraw(e);
            abc.display();
        }
    }
>>>>>>> 5e2661b (week16)
    return 0;
}
