/* ���Ҷһ���ָ���볣����
��Ŀ����

�趨���»��ʳ���

��Ԫ����Ϊ6.2619����ʾ1��Ԫ�һ�6.2619Ԫ�����

ŷԪ����Ϊ6.6744����ʾ1ŷԪ�һ�6.6744Ԫ�����

��Ԫ����Ϊ0.0516����ʾ1Ԫ��Ԫ�һ�0.0516Ԫ�����

�۱һ���Ϊ0.8065����ʾ1Ԫ�۱ұҶһ�0.8065Ԫ�����

����һ������ָ�룬��������ָ��ָ��ͬ�Ļ��ʣ�Ȼ���������ֻ��Ҷһ�Ϊ����ҵ�����

Ҫ�󣺲���ֱ��ʹ�û��ʳ������м��㣬����ʹ�ó���ָ�룬ֻ��ʹ��һ��ָ��

 


����

����һ��t��ʾ��t������ʵ��

ÿ��������һ����ĸ����ʾ�������ͣ�Ȼ��������һ�����֣���������������ʾ��������

D��ʾ��Ԫ��E��ʾŷԪ��Y��ʾ��Բ��H��ʾ�۱�

��������t��

 


���

ÿ������һ�������������������4λС��

��C++�У����ָ�����ȵĲο��������£�

 

#include <iostream>

#include <iomanip> //����������ͷ�ļ�

using namespace std;

void main( )

{ double a =3.141596;

  cout<<fixed<<setprecision(3)<<a<<endl;  //���С�����3λ

}

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������
4
Y 10000
D 88.3
H 200
E 73.1

�������
516.0000
552.9258
161.3000
487.8986*/
#include<iostream>
#include<iomanip>
using namespace std;
int main(void)
{
	const double *p;
	int t, i;
	double oldmoney, newmoney, go;
	p=&go;
	char boss;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>boss>>oldmoney;
		switch(boss)
		{
			case 'D':go=6.2619;break;
			case 'E':go=6.6744;break;
			case 'Y':go=0.0516;break;
			case 'H':go=0.8065;break;
			default:;break;
		}
	newmoney=(*p)*oldmoney;
	cout<<fixed<<setprecision(4)<<newmoney<<endl;
	}
	return 0;
	
}


