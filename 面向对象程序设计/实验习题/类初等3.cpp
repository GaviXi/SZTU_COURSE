/* ���Բ (�������)
��Ŀ����

���һ������Point���������ԣ�x�����y���꣬�������趨���꣨setPoint������ȡx���꣨getX������ȡy���꣨getY��

���һ��Բ��Circle���������ԣ�Բ������x��y���뾶r������������

1. �趨Բ�ģ�setCenter��������Բ��x�����y����

2. �趨�뾶��setRadius�������ð뾶����

3. ���������getArea�������㹫ʽ�����=3.14*r*r

4. �����ܳ���getLength�������㹫ʽ���ܳ�=2*3.14*r

5. ������contain�����ж�һ��Բ�Ƿ����һ���㣬����Բ�ĵ������ľ��룬Ȼ��Ͱ뾶���Ƚϣ������򲻰�����С�ڵ��������

ע�⣺�ύ����ʱ������ע�ͻ��ֳ����������ඨ�塢��ʵ�֡�������������

//-----�ඨ��------

class XXX

{ 

        // д�ඨ�����

};

//----��ʵ��------

void XXX::process()

{

        // д�ඨ�����

};

//-----������-----

int main()

{

        //�Զ���һЩ����

        //����һ��Բ�����һ�������

       //����Բ����͵�����������ֵ��������ʼ��

       //���Բ�������Բ���ܳ�

       //���Բ�Ƿ�����㣬���������yes���������no

       return 0;

}


����

��һ������Բ����������������Բ�ĵ�x��y���꣬�뾶

�ڶ�����������������������x��y����


���

��һ�����Բ��������ܳ������֮���ÿո������������ȵ�С�����2λ

�ڶ������Բ�Ƿ�����㣬���������yes���������no

 

��C++�У����ָ�����ȵĲο��������£�

 

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{

        double a =3.14;

        cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

}

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
1 1 1
2 2

�������1
3.14 6.28
no

��ʾ

���������Ĺ�ʽ dis =sqrt [ (x1-x2)^2  + (y1-y2)^2 ] �� ^2��ʾƽ����sqrt��ʾ��ƽ����������ʽֻ�Ǳ�ʾ���壬������ʵ����

��C++ʹ��sqrt����������ƽ������ͷ�ļ�����cmath*/ 
#include<iostream>
#include <iomanip> //����������ͷ�ļ�
using namespace std;
//-----�ඨ��------
class Ponit
{
public:
	int getX();
	int getY();
	void setPoint(int,int);
private:
	int x;
	int y;
};
class Circle
{
public:
	void setCenter(int,int);
	void setRadius(int);
	float getArea();
	float getLength();
	void contain(int,int);
private:
	int x;
	int y;
	int r;
};
//----��ʵ��------
int Ponit::getX()
{
	return x;
}
int Ponit::getY()
{
	return y;
}
void Ponit::setPoint(int a,int b)
{
	x = a;
	y = b;
}
void Circle::setCenter(int a, int b)
{
	x = a;
	y = b;
}
void Circle::setRadius(int a)
{
	r = a;
}
float Circle::getArea()
{
	return 3.14 * r * r;
}
float Circle::getLength()
{
	return 2 * 3.14 * r;
}
void Circle::contain(int a,int b)
{
	int sum = (a - x) * (a - x) + (b - y) * (b - y);
	if (sum > r * r) cout << "no" << endl;
	else cout << "yes" << endl;
}
//-----������-----
int main()
{
	int a, b, c, d, e;
	Circle circle;
	Ponit point;
	cin >> a >> b >> c;
	circle.setCenter(a, b);
	circle.setRadius(c);
	cin >> d >> e;
	point.setPoint(d, e);
	cout << fixed << setprecision(2) << circle.getArea() << " "<<circle.getLength()<<endl;
	circle.contain(point.getX(), point.getY());
	return 0;
}
