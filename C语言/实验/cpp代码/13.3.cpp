/*读入n个整数，调用max_min()函数求这n个数中的最大值和最小值。

输入格式:
输入有两行：
第一行是n值；
第二行是n个数。

输出格式:
输出最大值和最小值。

输入样例:
在这里给出一组输入。例如：

5
8 9 12 0 3
输出样例:
在这里给出相应的输出。例如：

max = 12
min = 0
*/
#include<stdio.h>
int max_min(int *pmax,int *pmin);
int main()
{
	int n,i,max,min;
	max_min(&max,&min);
	printf("max = %d\nmin = %d",max,min);
	return 0;
}
int max_min(int *pmax,int *pmin)
{
	int i,n;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	*pmax=a[0];
	*pmin=a[0];
    for(i=1;i<n;i++)
	{
		if(*pmax<a[i])
		{
			*pmax=a[i];
		}
		if(*pmin>a[i])
		{
			*pmin=a[i];
		}
	}
} 
