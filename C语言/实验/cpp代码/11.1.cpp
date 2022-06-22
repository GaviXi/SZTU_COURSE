/*输入一个以#结束的字符串，本题要求滤去所有的非十六进制字符（不分大小写），组成一个新的表示十六进制数字的字符串，然后将其转换为十进制数后输出。如果在第一个十六进制字符之前存在字符“-”，则代表该数是负数。

输入格式：
输入在一行中给出一个以#结束的非空字符串。

输出格式：
在一行中输出转换后的十进制数。题目保证输出在长整型范围内。

输入样例：
+-P-xf4+-1!#
输出样例：
-3905*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j=0,k,n=0,flag=1,flag2=0,num,sum=0; 
	char a[500]; //定义输入的字符串 
	char b[500];//定义摘取出来的16进制的新字符串 
	for(i=0;i<=500;i++)//利用循环给a字符串赋值 
	{
		scanf("%c",&a[i]);
		if(a[i]=='#')//记下输入了n次字符 
		{
			num=i;
			break;
		}
	}
	for(i=0;i<num+1;i++)// 对输入的字符串开始摘取选择 
	{
		if(a[i]=='-'&&flag==1)//遇到十六进制字符前有负号的话记录下来 
		{
		    flag2=1;
	    }
	    else if(a[i]=='+'&&flag==1)
	    {
	    	flag2=0;
		}
	    else if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='f'||a[i]>='A'&&a[i]<='F')//遇到十六进制字符，对b字符串进行赋值 
	    {
	    	flag=0;
	    	if(a[i]>='A'&&a[i]<='F')
	    	{
	    		b[j]=a[i]+32;
			}
			else 
			{
				b[j]=a[i];
		    }
		    j++;
	    }
		else if(a[i]=='#')//终止赋值，记录b有多少个字符 
		{
			num=j;
		}
	}
	if(num==1&&b[0]=='0'||num==0)
	{
		printf("0");
		return 0;
	}
	for(k=num-1;k>=0;k--)//b字符从十六进制换成十进制，得出结果 
	{
		switch(b[k])
		{
			case '0':sum=sum;break;
			case '1':sum=sum+pow(16,n);break;
			case '2':sum=sum+2*pow(16,n);break;
			case '3':sum=sum+3*pow(16,n);break;
			case '4':sum=sum+4*pow(16,n);break;
			case '5':sum=sum+5*pow(16,n);break;
			case '6':sum=sum+6*pow(16,n);break;
			case '7':sum=sum+7*pow(16,n);break;
			case '8':sum=sum+8*pow(16,n);break;
			case '9':sum=sum+9*pow(16,n);break;
			case 'a':sum=sum+10*pow(16,n);break;
			case 'b':sum=sum+11*pow(16,n);break;
			case 'c':sum=sum+12*pow(16,n);break;
			case 'd':sum=sum+13*pow(16,n);break;
			case 'e':sum=sum+14*pow(16,n);break;
			case 'f':sum=sum+15*pow(16,n);break;
		}
		n++;
	}
	if(num>=1)
	{
		if(flag2==1)
	    {
	    	printf("-%d",sum);//若有负号标志，则输出负号加结果 
    	}
    	else if(flag2==0)
    	{
	    	printf("%d",sum);
    	}
  	}
	return 0;
} 
