/*7-5 ��һԪ���η��̵ĸ�
���� 20
���� �½���
��λ �㽭��ѧ
����ĿҪ��һԪ���η���ax 
2
 ��bx��c��0�ĸ����������2λС����

�����ʽ:
������һ���и���3������ϵ��a��b��c���м��ÿո�ֿ���

�����ʽ:
����ϵ������������ͬ�����

1)�����������������ȵ�ʵ��������ÿ�����һ�������ȴ��С��

2)�����������������ȸ���������ÿ�а��ո�ʽ��ʵ��+�鲿i�����һ������������鲿Ϊ���ģ�������鲿Ϊ���ģ�

3)�������ֻ��һ��������ֱ������˸���

4)���ϵ����Ϊ0�������"Zero Equation"��

5)���a��bΪ0��c��Ϊ0�������"Not An Equation"��

��������1:
2.1 8.9 3.5
�������1:
-0.44
-3.80
��������2:
1 2 3
�������2:
-1.00+1.41i
-1.00-1.41i
��������3:
0 2 4
�������3:
-2.00
��������4:
0 0 0
�������4:
Zero Equation
��������5:
0 0 1
�������5:
Not An Equation*/ 
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	
	double a,b,c,delta,x,x1,x2,p,q,t,m,n;
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=(b*b-4*a*c);
	if(a==0&&b==0&&c==0)
	{
		printf("Zero Equation");
	}
	else if(a==0&&b==0&&c!=0)
	{
		printf("Not An Equation");
	}
	else if(delta>0)
	{
		if(a=0)
		{
			x=-c/b;
			printf("x=%.2lf",x);
		}
		else
		{
		    p=-b/(2.0*a);
		    q=sqrt(delta)/(2.0*a);
		    x1=p+q;
		    x2=p-q;
		    if(x1<x2)
	     	{
		    	t=x2;
			    x2=x1;
		    	x1=t;
		    }
		    printf("%.2lf\n%.2lf",x1,x2);
		}
		
	}
	else if(delta==0)
	{
		x=-b/(2*a);
		printf("%.2lf",x);
	}
	else if(delta<0)
	{
		m=-b/(2*a);
		n=sqrt(-delta)/(2*a);
		if(n>0)
		{
		printf("x1=%.2lf+%.2lfi\nx2=%.2lf-%.2lfi",m,n,m,n);
	    }
	    else
	    printf("x2=%.2lf-%.2lfi\nx1=%.2lf+%.2lfi",m,n,m,n);
	}
	return 0;
}
