/** ���ι�ϵ����������أ�
��Ŀ����

����������ö�άƽ�����ꡣ

�������CPoint����������x,y�����ͣ��������У����ι��캯����getX��getY�ֱ𷵻ص��x���꣬y���ꡣ

���������CRectangle���������ԣ����ε����Ͻ�����leftPoint�����½�����rightPoint�����з����У�

1�����ι��캯������ʼ�����ε����Ͻǡ����½�

2������>�����������ΪCPoint����󣬼���Ϊp����p�ھ����ڣ�����true,���򷵻�false��

3������>���������һ�������������ڶ������Σ����ֱ߽������ȣ�������true�����򷵻�false����Ҫ��ú�������2��ʵ�֣�

4������==��������ж����������Ƿ�һ�£�����true��false��

5������*��������ж����������Ƿ����ص����֣�����true��false��

6����������ת���������������ε���������أ���������͡�

7������<<�������������ε����������꣬�����ʽ��������

����2�����Σ�����������жϾ��εĹ�ϵ�����������£������޸ġ�

int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;
    while (t--)
    {
        // ����1�����Ͻǡ����½�
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        // ����2�����Ͻǡ����½�
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);
        // �������1�����꼰���
        cout << "����1:" << rect1 << " " << (int)rect1 << endl;
        // �������2�����꼰���
        cout << "����2:" << rect2 << " " << (int)rect2 << endl;
        if (rect1 == rect2)
        {
            cout << "����1�;���2���" << endl;
        }
        else if (rect2 > rect1)
        {
            cout << "����2��������1" << endl;
        }
        else if (rect1 > rect2)
        {
            cout << "����1��������2" << endl;
        }
        else if (rect1 * rect2)
        {
            cout << "����1�;���2�ཻ" << endl;
        }
        else
        {
            cout << "����1�;���2���ཻ" << endl;
        }
        cout << endl;
    }
    return 0;
}
�ɸ�����Ҫ����ӹ��캯��������������

 


����

���Դ���

ÿ������������£�

����1�����Ͻǡ����½�����

����2�����Ͻǡ����½�����


���

ÿ���������������£��м��Կ��зָ���

����1�����������������ʽ��������

����2�����������������ʽ��������

����1�;���2�Ĺ�ϵ������1��������2������2��������1������2�;���1��ȡ�����1�;���2�ཻ������1�;���2���ཻ��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
1 4 4 1
2 3 3 2
1 4 4 1
0 3 5 2

�������1
����1:1 4 4 1 9
����2:2 3 3 2 1
����1��������2

����1:1 4 4 1 9
����2:0 3 5 2 5
����1�;���2�ཻ
**/
#include <iostream>
using namespace std;
class CPoint
{
    int x, y;
public:
    CPoint(int a, int b) :x(a), y(b) {};
    int getX() { return x; }
    int getY() { return y; }
};
class CRectangle
{
    CPoint leftPoint;
    CPoint rightPoint;
public:
    CRectangle(int a, int b, int c, int d) :leftPoint(a, b), rightPoint(c, d) {};
    bool operator>(CPoint a)
    {
        if (a.getX() >= leftPoint.getX() && a.getX() <= rightPoint.getX() && a.getY() <= leftPoint.getY() && a.getY() >= rightPoint.getY()) return true;
        else return false;
    }
    friend bool operator>(CRectangle& a, CRectangle& b);
    bool operator==(CRectangle& a)
    {
        if (leftPoint.getX() == a.leftPoint.getX() && leftPoint.getY() == a.leftPoint.getY()
            && rightPoint.getX() == a.rightPoint.getX() && rightPoint.getY() == a.rightPoint.getY())
            return true;
        else return false;
    }
    bool operator*(CRectangle& a)
    {
        CPoint b(leftPoint.getX(), rightPoint.getY());
        CPoint c(rightPoint.getX(), leftPoint.getY());
        CPoint e(a.leftPoint.getX(), a.rightPoint.getY());
        CPoint f(a.rightPoint.getX(), a.leftPoint.getY());
        if (leftPoint.getX() >= a.leftPoint.getX() && rightPoint.getX() <= a.rightPoint.getX()
            && leftPoint.getY() >= a.leftPoint.getY() && a.rightPoint.getY() >= rightPoint.getY())
            return true;
        else if (a.leftPoint.getX() >= leftPoint.getX() && a.rightPoint.getX() <= rightPoint.getX()
            && a.leftPoint.getY() >= leftPoint.getY() && rightPoint.getY() >= a.rightPoint.getY())
            return true;
        else if (*this>a.leftPoint||*this>a.rightPoint||*this>e||*this>f) return true;
        else if (a > leftPoint || a > rightPoint || a > b || a > c) return true;
        else if (*this > a || a > *this) return true;
        else return false;
    }
    operator int()
    {
        return (rightPoint.getX() - leftPoint.getX()) * (leftPoint.getY() - rightPoint.getY());
    }
    friend ostream& operator<<(ostream& out, CRectangle&);
};
bool operator>(CRectangle& a, CRectangle& b)
{
    if (a > b.leftPoint && a > b.rightPoint) return true;
    else return false;
}
ostream& operator<<(ostream& out, CRectangle& a)
{
    cout << a.leftPoint.getX() << " " << a.leftPoint.getY() <<
        " " << a.rightPoint.getX() << " " << a.rightPoint.getY();
    return out;
}
int main()
{
    int t, x1, x2, y1, y2;
    cin >> t;
    while (t--)
    {
        // ����1�����Ͻǡ����½�
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect1(x1, y1, x2, y2);
        // ����2�����Ͻǡ����½�
        cin >> x1 >> y1 >> x2 >> y2;
        CRectangle rect2(x1, y1, x2, y2);
        // �������1�����꼰���
        cout << "����1:" << rect1 << " " << (int)rect1 << endl;
        // �������2�����꼰���
        cout << "����2:" << rect2 << " " << (int)rect2 << endl;
        if (rect1 == rect2)
        {
            cout << "����1�;���2���" << endl;
        }
        else if (rect2 > rect1)
        {
            cout << "����2��������1" << endl;
        }
        else if (rect1 > rect2)
        {
            cout << "����1��������2" << endl;
        }
        else if (rect1 * rect2)
        {
            cout << "����1�;���2�ཻ" << endl;
        }
        else
        {
            cout << "����1�;���2���ཻ" << endl;
        }
        cout << endl;
    }
    return 0;
}
