/*������㣨��Ԫ������
��Ŀ����

Point��Ļ�����ʽ���£�

class Point
{
private:
    double x, y;
public:
    Point(double xx, double yy); // ���캯��
};
���������Ҫ��

1.ʵ��Point�ࣻ
2.ΪPoint������һ����Ԫ����double Distance(Point &a, Point &b),���ڼ�������֮��ľ��롣ֱ�ӷ���Point�����˽�����ݽ��м��㡣
3.��дmain������������������ֵ����������֮��ľ��롣
 


����

��1�У�������������ĵ�Ե���Ŀ

��2�п�ʼ��ÿ�����������������x��y����

 

 


���

ÿ���������һ����֮��ľ��루���ֱ��ȡ��������,���������� ��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
1 0 2 1
2 3 2 4
�������1
*/
#include <iostream>
#include <math.h>
using namespace std;
class Point
{
private:
    double x, y;
public:
    Point(double xx, double yy):x(xx),y(yy){}
    friend double Distance(Point& a, Point& b);
};
double Distance(Point& a, Point& b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}


int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        double x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        Point a(x1, y1);
        Point b(x2, y2);
        cout << (int)Distance(a, b) << endl;
    }
    
}
