/*����n������������max_min()��������n�����е����ֵ����Сֵ��

�����ʽ:
���������У�
��һ����nֵ��
�ڶ�����n������

�����ʽ:
������ֵ����Сֵ��

��������:
���������һ�����롣���磺

5
8 9 12 0 3
�������:
�����������Ӧ����������磺

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
