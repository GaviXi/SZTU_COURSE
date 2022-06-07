/*Point(���빹��)
��Ŀ����

������һ��ƽ���ϵĵ���ඨ�壬��������ʵ���������з����������ɵ��������
class Point
{
	double x, y;
public:
	Point();//ȱʡ���캯������x,y�ֱ�ֵΪ0 
	Point(double x_value, double y_value);//�вι��캯������x,y��������ֵ 
	double getX();//����x��ֵ 
	double getY();//����y��ֵ 
	void setX(double x_value);//����x��ֵ 
	void setY(double y_value);//����y��ֵ 
	double distanceToAnotherPoint(Point p);//���㵱ǰ�㵽������p�ľ��� 
};
����

�������ݵ����� t

��һ��������ݵ�p1��x����   ��һ��������ݵ�p1��y����  ��һ��������ݵ�p2��x����   ��һ��������ݵ�p2��y����

..........


���

���p1��p2�ľ���

��C++�У����ָ�����ȵĲο��������£�

 

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{ double a =3.14;

  cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

}

�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
1 2 3 4
-1 0.5 -2 5

�������1
Distance of Point(1.00,2.00) to Point(3.00,4.00) is 2.83
Distance of Point(-1.00,0.50) to Point(-2.00,5.00) is 4.61
*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
class Point
{
	double x, y;
public:
	Point();
	Point(double x_value, double y_value);
	double getX();
	double getY();
	void setX(double x_value);
	void setY(double y_value);
	double distanceToAnotherPoint(Point p);
};
Point::Point():x(0),y(0){}
Point::Point(double x_value, double y_value):x(x_value),y(y_value){}
double Point::getX()
{
	return x;
}
double Point::getY()
{
	return y;
}
void Point::setX(double x_value)
{
	x = x_value;
}
void Point::setY(double y_value)
{
	y = y_value;
}
double Point::distanceToAnotherPoint(Point p)
{
	return sqrt(pow((x - p.getX()), 2) + pow((y - p.getY()), 2));
}
int main(void)
{
	int i, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		float x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		Point p1(x1, y1);
		Point p2(x2, y2);
		cout << fixed << setprecision(2) << "Distance of Point" << "(" << x1 << "," << y1 << ")" << " to "
			<< "Point" << "(" << x2 << "," << y2 << ")" << " is " << fixed << setprecision(2) << p1.distanceToAnotherPoint(p2) << endl;
	}
	return 0;
}
 
