/*7-4 ��������Ϣ
���� 10
���� ����
��λ ������ѧԺ
����ĿҪ���������Ϣ�����㹫ʽΪinterest=money��(1+rate) 
year
 ?money������interestΪ����ʱ����Ϣ��˰ǰ����money�Ǵ���year�Ǵ��ڣ�rate�������ʡ�

�����ʽ��
������һ����˳�����������ʵ��money��year��rate���Կո�ָ���

�����ʽ��
��һ���а���interest = ��Ϣ���ĸ�ʽ�����������Ϣ������λС����

����������
1000 3 0.025
���������
interest = 76.89*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	
	double money,year,rate,interest;
	scanf("%lf %lf %lf",&money,&year,&rate);
	interest=money*pow((1+rate),year)-money;
	printf("interest=%.2lf",interest);
	return 0;
}
