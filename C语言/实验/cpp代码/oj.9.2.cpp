/*��Ŀ����

ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ��������������������������ȼ���ͬ���������ҵ�˳����㡣


����

������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������


���

��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
1+2*10-10/2=
�������1
10*/ 

#include<stdio.h>
int main()
{
	double x,y;
	char op;
	scanf("%lf",&x);
    while((op=getchar())!='=')
	{
		scanf("%lf",&y);
		if(op=='/'&&y==0)
		{
			printf("ERROR");
			return 0;
		}
		else
		{
			switch(op)
			{
			    case '+':x=x+y;break;
                case '-':x=x-y;break;
                case '*':x=x*y;break;
                case '/':x=x/y;break;
                default:printf("ERROR");return 0;
			}
		}
	}
	printf("%lf",x);
	return 0;
}
