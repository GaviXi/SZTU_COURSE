/* ���ҼӼ�����������أ�
��Ŀ����

����CMoney�࣬����Ԫ���ǡ����������ݳ�Ա����Ԫ�������ء�+����'-'��ʵ�ֻ��ҵļӼ����㣨����a-b��a�Ľ��ʼ�մ��ڵ���b�Ľ���

�������뼰�����ʵ�ֻ��ҵ����룬�����

��������Ļ���ֵ�����䲻�Ͻ��мӡ�����������������

�ɸ�����Ҫ��ΪCMoney����ӹ��캯����������Ա������

 

 


����

���Դ���

ÿ��������ݸ�ʽ���£�

��һ�У���ʼ���ң�Ԫ �� ��

�ڶ��п�ʼ��ÿ��һ��������add Ԫ �� �֣��ӣ���minus Ԫ �� �֣�������stop��������

 


���

 ��ÿ��������ݣ����������ֹ��Ļ��ҽ����������ʽ��������


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
2
0 0 0
add 48 9 0
minus 0 5 3
add 18 6 8
add 12 1 2
stop
10 2 5
add 5 8 0
add 32 1 2
minus 10 5 9
minus 37 5 8
stop



�������1
79Ԫ1��7��
0Ԫ0��0��

��ʾ

<<��>>����Ҫ����*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class CMoney
{
public:
    CMoney() {};
    CMoney(int y,int j,int f) :yuan(y),jiao(j),fen(f){};
    friend ostream& operator<<(ostream& out, CMoney& text);
    friend istream& operator>>(istream& out, CMoney& text);
    friend CMoney& operator+(CMoney& a,const CMoney& b);
    friend CMoney& operator-(CMoney& a,const CMoney& b);
private:
    int yuan;
    int jiao;
    int fen;
};
ostream& operator<<(ostream& out, CMoney& text)
{
    cout << text.yuan << "Ԫ" <<text.jiao << "��"<< text.fen<<"��";
    return out;
}
istream& operator>>(istream& out, CMoney& text)
{
    cin >> text.yuan >> text.jiao >> text.fen;
    return out;
}
CMoney& operator+(CMoney& a,const CMoney& b)
{
    int left;
    a.fen = a.fen + b.fen;
    left = a.fen / 10;
    a.fen = a.fen % 10;
    a.jiao = a.jiao + b.jiao + left;
    left = a.jiao / 10;
    a.jiao = a.jiao % 10;
    a.yuan = a.yuan + b.yuan + left;
    return a;   
}
CMoney& operator-(CMoney& a,const CMoney& b)
{
    if (a.fen < b.fen)
    {
        a.jiao--;
        a.fen = a.fen + 10 - b.fen;
    }
    else
    {
        a.fen = a.fen - b.fen;
    }
    if (a.jiao < b.jiao)
    {
        a.yuan--;
        a.jiao = a.jiao + 10 - b.jiao;
    }
    else
    {
        a.jiao = a.jiao - b.jiao;
    }
    a.yuan = a.yuan - b.yuan;
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        CMoney text;
        cin >> text;
        string g;
        cin >> g;
        while (g != "stop")
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (g == "add")
            {
                text = text + CMoney(a, b, c);
            }
            else if (g == "minus")
            {
                text = text - CMoney(a, b, c);
            }
            cin >> g;
        }
        cout << text << endl;
    }
}
