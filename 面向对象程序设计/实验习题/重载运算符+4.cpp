/*�ַ����Ƚϣ���������أ�
��Ŀ����

����һ���ַ�����str��������Ų��������ַ��������������"= ="��"<"��">",���������ַ��ܵĵ��ڡ�С�ںʹ��ڵıȽ����㡣

class Str
{
private:
    char* p;
public:
    Str();
    Str(char* s);
    friend bool operator >(Str&, Str&);
    friend bool operator <(Str&, Str&);
    friend bool operator ==(Str&, Str&);
    void show()
    {
        cout << p;
    }
};
Ҫ�����£�
1.ʵ��str�ࣻ
2.��дmain��������ʼ������str����A��B��C��Ȼ��������������ȥ�������ص�����������A>B,�����A���ַ������������B���ַ��������A<C�������A���ַ������������C���ַ��������B==C�������B���ַ������������C���ַ�����
3.�ַ����ȽϷ�ʽΪ���ν���Ӧλ���ַ���ASCII����бȽϡ�
 
 


����

����3�У�ÿ��Ϊһ���ַ�������ʼ������str����

 


���

����Ƚ�֮��Ľ���ַ�����ÿ���ȽϵĽ��һ�С�

 


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
i am a student
i love China
i love China
�������1
i love China
i am a student
i love China
��ʾ

 ���������ַ������пո��� getline�������룬������ʾ

�ַ� a[50];

cin.getline(a, 50);*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Str
{
private:
    char* p;
public:
    Str() {};
    Str(char* s)
    {
        p = new char[strlen(s)];
        strcpy(p, s);
    }
    friend bool operator >(Str&, Str&);
    friend bool operator <(Str&, Str&);
    friend bool operator ==(Str&, Str&);
    void show()
    {
        cout << p;
    }
};
bool operator >(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) >0)
    {
        return true;
    }
    else return false;
}
bool operator <(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) <0)
    {
        return true;
    }
    else return false;
}
bool operator ==(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) == 0)
    {
        return true;
    }
    else return false;
}
int main()
{
    char q[1000];
    char p[1000];
    char s[1000];
    cin.getline(q, sizeof(q));
    cin.getline(p, sizeof(p));
    cin.getline(s, sizeof(s));
    Str A(q);
    Str B(p);
    Str C(s);
    if (A > B)
    {
        A.show();
    }
    else B.show();
    cout << endl;
    if (A < C)
    {
        A.show();
    }
    else C.show();
    cout << endl;
    if (B == C)
    {
        B.show();
    }
    else C.show();
}
