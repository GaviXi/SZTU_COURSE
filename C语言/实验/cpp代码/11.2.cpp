/*����ĿҪ���д����ͳ��һ���ַ��е��ʵĸ�������ν�����ʡ���ָ���������ո���ַ�����������֮���ÿո�ָ����ո��������Ƕ����

�����ʽ:
�������һ���ַ���

�����ʽ:
��һ����������ʸ�����

��������:
Let's go to room 209.
�������:
5*/
#include<stdio.h>
int main()
{
	char op;
	int num=0,flag=1;
	scanf("%c",&op);
	while(op!='\n')
	{
		if(((op>='a'&&op<='z')||(op>='A'&&op<='Z')||(op>='0'&&op<='9'))&&flag==1)
		{
			num++;
			flag=0;
		}
		else if(op==' ')
		{
			flag=1;
		}
		scanf("%c",&op);
	}
	printf("%d",num);
	return 0;
}
