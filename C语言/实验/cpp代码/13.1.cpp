/*�Ӽ�����������������������ָ�����������������ʵ�ֽ��佻���������������

�����ӿ�:
void swap(int *x, int *y)

�����ʽ:
�Ӽ�����������������

�����ʽ:
�������������ʽ��������������������

��������:
11 22
�������:
After swap:22,11*/
#include<stdio.h>
void swap(int *x,int *y);
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	swap(&a,&b);
	printf("After swap:%d,%d",a,b);
	return 0;
}
void swap(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
