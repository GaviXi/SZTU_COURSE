<<<<<<< HEAD
/*��ά�ռ�ĵ㣨�̳У�
��Ŀ����

����һ��ƽ���ϵĵ�C2D�࣬������һ��getDistance()�ĳ�Ա����������õ㵽ԭ��ľ��룻��C2D����������ά�ռ�ĵ�C3D�࣬����getDistance()��Ա��������õ㵽ԭ��ľ��롣�Էֱ�����һ��C2D��C3D�Ķ��󣬼������ǵ�ԭ��ľ��롣
��ά�ռ�����㣨x, y, z���ͣ�x1, y1, z1���ľ��빫ʽ���£�
[(x-x1)^2+(y-y1)^2+(z-z1)^2]^(1/2) 
 
=======
/*�������ÿ������ؼ̳У�
��Ŀ����

ĳ������վ�������ó�������ĳ�����Ƴ������ۺϷ������������ó����ÿ�������ó̻�Ա�����������ÿ����ܡ�

�ó̻�Ա�����л�Ա���ţ�int�����ó̻��֣�int����ͨ����Ա���¶���������������ۼ��ó̻��֡�

���ÿ����п��ţ�int����������string)����ȣ�int)���˵���float)�����ÿ����֣�int����------��ע����������

���ÿ����ѽ��m��������ȣ����������������˵����+m�����-m�����ÿ����ְ����ѽ���ۼӡ�

���ÿ��˿�m���˵����-m�����ÿ����ּ�ȥ�˿��

ͨ���ó����ÿ����ó����µ����ó̻��ֺ����ÿ�����˫�ػ��֣����ó̻��ֺ����ÿ�����ͬʱ���ӣ���

�ó����ÿ����԰�      �ó̻��֣����ÿ�����= 1��2    �ı��������ÿ����ֶһ�Ϊ�ó̻��֡�

��ʼ�������ÿ����֡��ó̻��֡��˵����Ϊ0��

�����������ݣ������ó̻�Ա���ࡢ���ÿ��࣬�������������ó����ÿ��ಢ����������Ĺ��캯�����������躯����

�����ó����ÿ��������뿨��Ϣ�����ö����Ա��������ó����µ������ÿ�ˢ�������ÿ��˿���ÿ����ֶһ�Ϊ�ó̻��ֵȲ�����
>>>>>>> 5e2661b (week16)


����

<<<<<<< HEAD
��һ�ж�ά�����λ��

�ڶ�����ά�����λ��1

��������ά�����λ��2

 
=======
��һ�У������ó̻�Ա���� ���ÿ��� ���� ���

�ڶ��У����Դ���n

�����е���n+2�У�ÿ�У����� �������

o   m���ó����¶������������m��

c   m�����ÿ����ѣ����ѽ��m��

q   m (���ÿ��˿�˿���m��

t    m�����ֶһ���m���ÿ����ֶһ�Ϊ�ó̻��֣�
>>>>>>> 5e2661b (week16)


���

<<<<<<< HEAD
��һ�ж�ά�����λ�õ�ԭ��ľ���

�ڶ�����ά�����λ��1��ԭ��ľ���

��������ά�����λ��2��ԭ��ľ���

��������ά�����λ��2��ֵ����ά���������󣬶�ά����㵽ԭ��ľ���

��������
3 4
3 4 5
6 8 8

�������
5
7.07107
12.8062
10*/
#include <iostream>
#include<cmath>
using namespace std;

class C2D
{
protected:
    int x;
    int y;
public:
    C2D(){}
    C2D(int a,int b)
    {
        x = a;
        y = b;
    }
    void getC2D(int a, int b)
    {
        x = a;
        y = b;
    }
    double getDistance()
    {
        return pow((pow(x, 2) + pow(y, 2)),0.5);
    }
};
class C3D :public C2D
{
public:
    C3D(int a, int b, int c)
    {
        getC2D(a, b);
        z = c;
    }
    double getDistance()
    {
        return pow((pow(x, 2) + pow(y, 2) + pow(z, 2)), 0.5);
    }
protected:
    int z;
};

int main()
{
    int a, b, c;
    cin >> a >> b;
    C2D A(a, b);
    cout<<A.getDistance()<<endl;
    cin >> a >> b >> c;
    C3D B(a, b,c);
    cout<<B.getDistance()<<endl;
    cin >> a >> b >> c;
    C3D C(a, b, c);
    cout<<C.getDistance() << endl;
    A = C;
    cout << A.getDistance() << endl;
    return 0;
}
=======
������в������ó����ÿ�����Ϣ��

�ó̺�   �ó̻���

���ÿ���  ����   �˵����   ���ÿ�����


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
1000 2002  lili  3000
4
o 212.5
c 300
q 117.4
t 200

�������1
1000 312
2002 lili 395.1 195

*/ 
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class travel
{
protected:
    int no;
    int fen = 0;
public:
    travel(int a):no(a){}
};
class card
{
protected:
    int cno;
    string name;
    int max;//���
    float cash = 0;//�˵�
    int cfen = 0;//���ÿ�����
public:
    card(int a,string b,int c):cno(a),name(b),max(c){}

    virtual void deposit(float m)
    {
        if (m < max)
        {
            cash = cash + m;
            max = max - m;
            cfen = cfen + (int)m;
        }
        else;
    }
    void giveout(float m)
    {
        cash = cash - m;
        cfen = cfen - (int)m;
    }
};
class travelcard:public travel,public card
{
public:
    travelcard(int a, int b, string c, int d):travel(a), card(b,c,d){}
    void change(float m)
    {
        if (cfen >= m)
        {
            cfen -= m;
            int dot = m / 2;
            fen = dot + fen;
        }
        else
        {
            int dot = cfen / 2;
            cfen = 0;
            fen = dot + fen;
        }
    }
    void deposit(float m)
    {
        if (m < max)
        {
            cash = cash + m;
            max = max - m;
            cfen = cfen + (int)m;
            fen = fen + (int)m;
        }
        else;
    }
    void display()
    {
        cout << no << " " << fen << "\n"
            << cno << " " << name << " " << cash << " " << cfen << "\n";
    }
};

    int main()
    {
        int no, cno, max;
        string name;
        cin >> no >> cno >> name >> max;
        travelcard text(no, cno, name, max);
        int t;
        cin >> t;
        while (t--)
        {
            char c;
            float m;
            cin >> c >>m;
            if (c == 'o') text.deposit(m);
            else if (c == 'c') text.card::deposit(m);
            else if (c == 'q') text.giveout(m);
            else if (c == 't') text.change(m);
        }
        text.display();

        return 0;
    }
>>>>>>> 5e2661b (week16)
