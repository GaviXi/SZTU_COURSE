/*从键盘任意输入两个整数，用指针作函数参数，编程实现将其交换后再重新输出。

函数接口:
void swap(int *x, int *y)

输入格式:
从键盘输入两个整数。

输出格式:
按输出样例的形式输出交换后的两个整数。

输入样例:
11 22
输出样例:
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
