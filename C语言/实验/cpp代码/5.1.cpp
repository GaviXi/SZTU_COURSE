/*7-1 ��༶ƽ����
���� 10
���� ׯ��
��λ ����ѧԺ
ĳ�༶���ɸ�ѧ���μӲ��顣�ڵõ����β���ĳɼ�֮��ȷ���ð༶���β����ƽ���֡�

�����ʽ:
һ���༶�����ɸ�����ɼ��� 0 �� 100 ֮������������� ?1 ��Ϊ������ǣ�������ǲ�����ƽ��ֵ����

�����ʽ:
�༶����ɼ�ƽ���֣����������λС����

��������ɼ�������ʾ No grades were entered��

�������� 1:
75 94 97 88 70 64 83 89 -1
������� 1:
�����������Ӧ����������磺

82.50
�������� 2:
-1
������� 2:
�����������Ӧ����������磺

No grades were entered*/ 
#include<stdio.h>
#include<math.h>
int main()
{   
    int score,num,total;
	float average;
	num=0;
	total=0;
	scanf("%d",&score); 
	while(score>=0)
	{	
		total=total+score;
		num++;
		scanf("%d",&score); 
	}

	if(num!=0)
	{
	    average=1.0*total/num;
	    printf("%.2f",average);
    }
	else
	{
		printf("No grades were entered");
	}
	return 0;
}
