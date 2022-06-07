/* �����ļӼ������㣨��������أ�
��Ŀ����

����һ�������࣬ͨ�������������+��-��*��ʵ����������֮��ĸ������㡣

class Complex
{
private:
    float real, image;
public:
    Complex(float x = 0, float y = 0);
    friend Complex operator+(Complex&, Complex&);
    friend Complex operator-(Complex&, Complex&);
    friend Complex operator*(Complex&, Complex&);
    void show();
};
Ҫ�����£�
1.ʵ��Complex�ࣻ
2.��дmain��������ʼ������Complex���󣬼�������֮��ļӼ��ˣ�����������
������˵��������
��z1=a+bi��z2=c+di(a��b��c��d��R)������������������ô���ǵĻ�(a+bi)(c+di)=(ac-bd)+(bc+ad)i.

����

��1�У�����������ֵ���ֱ�Ϊ��һ��Complex�����ʵ�����鲿��
��2�У�����������ֵ���ֱ�Ϊ�ڶ���Complex�����ʵ�����鲿��
 
 


���

��1�У�����Complex������Ӻ����������
��2�У�����Complex������������������
��3�У�����Complex������˺����������
 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
10 20
50 40
�������1
Real=60 Image=60
Real=-40 Image=-20
Real=-300 Image=1400

*/
#include <iostream>
#include<math.h>
using namespace std;
class Complex
{
private:
    float real, image;
public:
    Complex(float x = 0, float y = 0)
    {
        real = x;
        image = y;
    }

    friend Complex operator+(Complex&, Complex&);
    friend Complex operator-(Complex&, Complex&);
    friend Complex operator*(Complex&, Complex&);
    void show();
};
void Complex::show()
{
    cout << "Real=" << real << " " << "Image=" << image << endl;
}
Complex operator+(Complex&a, Complex&b) 
{
    Complex text;
    text.real = a.real + b.real;
    text.image = a.image + b.image;
    return text;
}
Complex operator-(Complex& a, Complex& b)
{
    Complex text;
    text.real = a.real - b.real;
    text.image = a.image - b.image;
    return text;
}
Complex operator*(Complex& a, Complex& b)
{
    Complex text;
    text.real = a.real * b.real - a.image * b.image;
    text.image = a.real * b.image + a.image * b.real;
    return text;
}
int main()
{
    float a, b, c, d;
    cin >> a >> b >> c >> d;
    Complex text1(a, b);
    Complex text2(c, d);
    Complex text3 = text1 + text2;
    Complex text4 = text1 - text2;
    Complex text5 = text1 * text2;
    text3.show();
    text4.show();
    text5.show();
    return 0;
}
