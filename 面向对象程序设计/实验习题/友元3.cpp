/*�������㣨��Ԫ������
��Ŀ����

��������������£�

class Complex
{
private:
	double real; // ʵ��
	double imag; // �鲿
public:
	Complex();
	Complex(double r, double i);
	// ��Ԫ����������c1 + c2(�������������)
	friend Complex addCom(const Complex& c1, const Complex& c2);
	// ��Ԫ��������������c���й�����(cΪ��������)
	friend void outCom(const Complex& c);
};
 

Ҫ�����£�

1.     ʵ�ָ��������Ԫ����addCom��outCom��

2.   �ο�addCom����Ϊ����������һ����Ԫ����minusCom������ʵ�����������ļ���

3.     ��main�����У�ͨ����Ԫ������ʵ�ָ����ļӼ����͸����������

 

 


����

��1�У���1��������ʵ�����鲿

��2�У����������Ĵ�����ע�⣺���������㡣�������ɲο�����

    ��3�п�ʼ��ÿ�������������ͣ��Լ���������ĸ�����ʵ�����鲿����+����ʾ������ӣ���-����ʾ���������

 


���

 ÿ��������������Ľ�������������ʽΪ��(ʵ��,�鲿)����

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
10 10
3
+ 20 10
- 15 5
+ 5 25
�������1
(30,20)
(15,15)
(20,40)
*/
#include <iostream>
#include <math.h>
#include<string.h>
using namespace std;
class Complex
{
private:
	double real; // ʵ��
	double imag; // �鲿
public:
	Complex(){}
	Complex(double r, double i):real(r),imag(i){}
	// ��Ԫ����������c1 + c2(�������������)
	friend Complex addCom(const Complex& c1, const Complex& c2);
	// ��Ԫ����������c1 - c2(�������������)
	friend Complex minusCom(const Complex& c1, const Complex& c2);
	// ��Ԫ��������������c���й�����(cΪ��������)
	friend void outCom(const Complex& c);
};
Complex addCom(const Complex& c1, const Complex& c2)
{
	Complex a(c1.real + c2.real, c1.imag + c2.imag);
	return a;
}
Complex minusCom(const Complex& c1, const Complex& c2)
{
	Complex a(c1.real - c2.real, c1.imag - c2.imag);
	return a;
}
void outCom(const Complex& c)
{
	cout << "(" << c.real << "," << c.imag << ")" << endl;
}
int main(void)
{
	double a, b, t;
	cin >> a >> b >>t;
	Complex item(a, b);
	while (t--)
	{
		char flag;
		double r, i;
		cin >>flag >>r >> i;
		Complex item2(r, i);
		if (flag == '+')
		{
			item=addCom(item, item2);
			outCom(item);
		}
		if (flag == '-')
		{
			item = minusCom(item, item2);
			outCom(item);
		}
	}
    return 0;
}
