/*本题要求提取一个字符串中的所有数字字符（'0'……'9'），将其转换为一个整数输出。

输入格式：
输入在一行中给出一个不超过80个字符且以回车结束的字符串。

输出格式：
在一行中输出转换后的整数。题目保证输出不超过长整型范围。

输入样例：
free82jeep5
输出样例：
825*/
#include<stdio.h>
int main()
{
	int i,num,j=0,flag=0;
	char a[80];
	int b[80];
	for(i=0;i<=80;i++)
	{
		scanf("%c",&a[i]);
		if(a[i]=='\n')
		{
			num=i;
			break;
		}
	}
	for(i=0;i<num;i++)
	{
		if(a[i]>='1'&&a[i]<='9')
		{
			flag=1;
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='0'&&flag==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	num=j;
	if(num==0)
	{
		printf("0");
	}
	else
	{
		for(j=0;j<num;j++)
     	{
	    	printf("%c",b[j]);
    	}
	}
	return 0;
}
