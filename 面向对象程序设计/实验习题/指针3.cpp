/*��̬���飨ָ�������飩
��Ŀ����

һ��ʼδ֪���鳤�ȣ�����Ҫ�󴴽���ͬ���͵�ָ�룬����ʹ��ָ�봴����Ӧ���ȵ����飬Ȼ������ɲ�ͬ��Ҫ��

��Ҫ�󴴽��������飬�����������������ݵ�ƽ��ֵ

��Ҫ�󴴽��ַ����飬�ҳ������ڵ������ĸ

��Ҫ�󴴽����������飬�ҳ��������Сֵ

Ҫ������������̲���ʹ�������±꣬�����鴴�������뵽�������Ƚϡ����㣬�����������ʹ��ָ��

��ʾ��ʹ��new�ؼ���

 


����

��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾ�������ͣ�I��ʾ�������ͣ�C��ʾ�ַ����ͣ�F��ʾ���������ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

��������t��ʵ��

 


���

ÿ�����ݲ�ͬ���������������Ӧ�Ľ��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������
3
C 5
A D E B C
I 6
22 55 77 33 88 55
F 4
3.1 1.9 6.5 4.8

�������
E
55
1.9

*/
#include<iostream>
using namespace std;
int main(void)
{
	int t, i;
	char item;
	int num;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int j;
		cin>>item>>num;
		if(item=='I')
		{
			int sum=0;
			double average;
			int *p = new int[num];
			for(j=0;j<num;j++)
			{
				cin>>*p;
				sum=sum+*p;
				p++;
			}
			average=sum/num;
			cout<<average<<endl;
		}
		else if(item=='C')
		{
			char max;
			char *q = new char[num];
			cin>>max;
			*q++ = max;
			for(j=1;j<num;j++)
			{
				cin>>*q;
				if(*q>=max) max=*q;
				q++;
			}
			cout<<max<<endl;
		}
		else if(item=='F')
		{
			float min;
			float *r = new float[num];
			cin>>min;
			*r++ = min;
			for(j=1;j<num;j++)
			{
				cin>>*r;
				if(*r<=min) min=*r;
				r++;
			}
			cout<<min<<endl;
		}
	}
	return 0;
	
}
