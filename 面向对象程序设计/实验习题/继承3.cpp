<<<<<<< HEAD
/*ʱ��ģ��(�̳У�
��Ŀ����

����������࣬�����������ݳ�Աvalue,���к���increment������1��

����ѭ���������̳м������࣬����˽�����ݳ�Ա����СֵminValue��maxValue,

��д���к���increment��ʹ��value��minValue~maxValue������ѭ��+1��

����ʱ���࣬���ݳ�Ա��˽��ѭ������������Сʱhour������minute����second�����к���time(int s)���㵱ǰʱ�侭��s��֮���ʱ�䣬��hour��minute��second����valueֵ��

����ʱ����������뵱ǰʱ��;���������,����time����������ʱ�䡣

������ĿҪ�����ӱ�Ҫ�Ĺ��캯���������������������躯����

��Ϊclock��time��ϵͳ���ú�����Ϊ�˱����������벻Ҫʹ��clock����time��Ϊ�������ߺ�����


����

��һ�в��Դ���n

2��һ�飬��һ��Ϊ��ǰʱ�䣨Сʱ ���� �룩���ڶ���Ϊ������������
=======
/*ͼ��������麯�����̬��
��Ŀ����

��дһ�����򣬶���������Shape����Shape���ж����麯��area()������������3�������ࣺCircle(Բ��)��Square(������)��Rectangle(����)�����麯���ֱ���㼸��ͼ�������
1��Ҫ��������������λС����
2��Ҫ���û���ָ�����飬ʹ��ÿһ��Ԫ��ָ��ÿһ�����������

����

�������ݵ����� t

��һ�����������Բ�İ뾶

��һ�����������������εı߳�

��һ����������о��εĳ�����

.......

�� t �����������Բ�İ뾶

�� t �����������������εı߳�

�� t ����������о��εĳ�����
>>>>>>> 5e2661b (week16)


���

<<<<<<< HEAD
���n��

ÿ�ж�Ӧÿ�鵱ǰʱ��;������������õ�����ʱ�䣨Сʱ�����ӣ��룩��
=======
��һ��������Բ�����

��һ�������������ε����

��һ�������о��ε����

......

�� t ��������Բ�����

�� t �������������ε����

�� t �������о��ε����
>>>>>>> 5e2661b (week16)


�����鿴ģʽ 
������ʾ
�鿴��ʽ
<<<<<<< HEAD
��������
2
8 19 20
20
23 30 0
1801
�������
8:19:40
0:0:1*/
#include <iostream>
#include<cmath>
using namespace std;

class js
{
protected:
    int value;
public:
    js(int v) :value(v) {}
    void increment()
    {
        value++;
    }
};

class forjs :public js
{
public:
    forjs(int a,int b,int c):js(a), minValue(b),maxValue(c){}
    int increment(int s)
    {
        int num = 0;
        while (s--)
        {
            value++;
            if (value == maxValue)
            {
                value = minValue;
                num++;
            }
        }
        return num;
    }
    int getvalue()
    {
        return value;
    }
private:
    int minValue;
    int maxValue;
};

class Clock
{
public:
    Clock(int a,int b,int c):hour(a,0,24),minute(b,0,60),second(c,0,60){}
    void time(int s)
    {
        int flag1 = second.increment(s);
        int flag2 = minute.increment(flag1);
        hour.increment(flag2);

    }
    void print()
    {
        cout << hour.getvalue() << ":" << minute.getvalue() << ":" << second.getvalue() << endl;
    }
private:
    forjs hour;
    forjs minute;
    forjs second;
};

=======
��������1 <-����
2
1.2
2.3
1.2 2.3
2.1
3.2
1.23 2.12

�������1
4.52
5.29
2.76
13.85
10.24
2.61

*/
#include <iostream>
#include<cstring>
#include<cmath>
#include <iomanip>
using namespace std;

class Shape
{
public:
    virtual double area() = 0;
};
class Circle:public Shape
{
public:
    Circle(double r1)
    {
        r = r1;
    }
    double area()
    {
        return 3.14 * r * r;
    }
protected:
    double r;
};
class Square :public Shape
{
public:
    Square(double b1)
    {
        b = b1;
    }
    double area()
    {
        return b*b;
    }
protected:
    double b;
};
class Rectangle :public Shape
{
public:
    Rectangle(double x1,double y1)
    {
        x = x1;
        y = y1;
    }
    double area()
    {
        return x * y;
    }
protected:
    double x,y;
};
>>>>>>> 5e2661b (week16)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
<<<<<<< HEAD
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        Clock zeros(a, b, c);
        zeros.time(d);
        zeros.print();
    }
    return 0;
}


=======
        double a,b,c,d;
        cin >> a;
        Circle A(a);
        cout << fixed << setprecision(2) << A.area() << endl;
        cin >> b;
        Square B(b);
        cout << fixed << setprecision(2) << B.area() << endl;
        cin >> c >> d;
        Rectangle C(c, d);
        cout <<fixed<<setprecision(2)<< C.area() << endl;
    }
    return 0;
}
>>>>>>> 5e2661b (week16)
