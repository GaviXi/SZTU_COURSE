/*7-6 ��������
���� 15
���� ���
��λ �㽭��ѧ
����Ҫ���д�������ĳ��ĳ��ĳ���Ǹ����еĵڼ��졣

�����ʽ:
������һ���а��ո�ʽ��yyyy/mm/dd����������/��/�ա����������ڡ�ע�⣺������б������Ǹ�������ܱ�4���������ܱ�100�����������ܱ�400�����������2����29�졣

�����ʽ:
��һ����������Ǹ����еĵڼ��졣

��������1:
2009/03/02
�������1:
61
��������2:
2000/03/02
�������2:
62*/ 
#include<stdio.h>
int main()
{
	int year,month,day;
	scanf("%d/%d/%d",&year,&month,&day);
	if(year%4!=0||year%100==0&&year%400!=0)    
	{
		switch(month)
		{
			case 01:printf("%d",day);break;
			case 02:printf("%d",31+day);break;
			case 03:printf("%d",31+28+day);break;
			case 04:printf("%d",31*2+28+day);break;
			case 05:printf("%d",31*2+28+30+day);break;
			case 06:printf("%d",31*3+28+30+day);break;
			case 07:printf("%d",31*3+28+30*2+day);break;
			case 8:printf("%d",31*4+28+30*2+day);break;
			case 9:printf("%d",31*4+28+30*3+day);break;
			case 10:printf("%d",31*5+28+30*3+day);break;
			case 11:printf("%d",31*5+28+30*4+day);break;
			case 12:printf("%d",31*6+28+30*4+day);break;
		}
	}
	else
	{
	    switch(month)
		{
			case 01:printf("%d",day);break;
			case 02:printf("%d",31+day);break;
			case 03:printf("%d",31+29+day);break;
			case 04:printf("%d",31*2+29+day);break;
			case 05:printf("%d",31*2+29+30+day);break;
			case 06:printf("%d",31*3+29+30+day);break;
			case 07:printf("%d",31*3+29+30*2+day);break;
			case 8:printf("%d",31*4+29+30*2+day);break;
			case 9:printf("%d",31*4+29+30*3+day);break;
			case 10:printf("%d",31*5+29+30*3+day);break;
			case 11:printf("%d",31*5+29+30*4+day);break;
			case 12:printf("%d",31*6+29+30*4+day);break;
		}
    }
    return 0;
}
