/*7-3 ���������������ܳ�
���� 15
���� C�γ���
��λ �㽭��ѧ
����Ҫ���д���򣬸�������������ε�������a��b��c�����㲢���������ܳ���ע�⣺��һ���������У� ��������֮�ʹ��ڵ����ߡ�������������㹫ʽ��area= 
s(s?a)(s?b)(s?c)
?
 ������s=(a+b+c)/2��

�����ʽ��
����Ϊ3�����������ֱ���������ε�3����a��b��c��

�����ʽ��
�������ı��ܹ���һ�������Σ�����һ���ڣ�����

area = ���; perimeter = �ܳ�
�ĸ�ʽ�����������λС�����������

These sides do not correspond to a valid triangle
��������1��
5 5 3
�������1��
area = 7.15; perimeter = 13.00
��������2��
1 4 1
�������2��
These sides do not correspond to a valid triangle*/ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
	
	int a,b,c;
	float area,s,perimeter;
	scanf("%d %d %d",&a,&b,&c);
	if((a+b>c)&&(a+c>b)&&(b+c>a))
	{
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		perimeter=a+b+c;
		printf("area=%.2f; perimeter=%.2f",area,perimeter);
	}
	else
	{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}
