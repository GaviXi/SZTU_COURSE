/*����Ҫ���д�����Ƚ������һϵ�������е���Сֵ���һ����������Ȼ�����ֵ�����һ��������������������������С�

ע�⣺��Ŀ��֤������Сֵ����Ψһ�ġ�

�����ʽ��
�����ڵ�һ���и���һ��������N����10�����ڶ��и���N�����������ּ��Կո�ָ���

�����ʽ��
��һ����˳���������������У�ÿ���������һ���ո�

����������
5
8 2 5 1 4
���������
1 2 5 4 8 */ 
#include<stdio.h>
int main()
{
	int n,i,j,k,l,m,min,max,nummin,nummax,x1,x2;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	} 
	if(n>1)
	{
	         min=a[0];
         	for(j=1;j<n;j++)
         	{
	         	if(min>a[j])
	        	{
		        	min=a[j];
		        	nummin=j;
	          	}
         	}
	         x1=a[0];
           	 a[0]=min;
	         a[nummin]=x1;
	         max=a[n-1];
	         if (n==2)
	         {
	         	printf("%d %d ",a[0],a[1]);
				return 0;
			 }
             for(k=n-2;k>0;k--)
         	{
		        if(max<a[k])
		        {
		        	 max=a[k];
			         nummax=k;
	           	}
	        }
	        x2=a[n-1];
	        a[n-1]=max;
	        a[nummax]=x2;
	        for(l=0;l<n;l++)
        	{
	        	printf("%d ",a[l]);
            }
    }
	else if(n==1)
	{
		printf("%d ",a[0]);
	}
	return 0;
}
