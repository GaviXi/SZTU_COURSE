/*����Ҫ���д���򣬸�������ѧ���ĳɼ���ͳ�Ʋ����ѧ����ƽ���ɼ�����߳ɼ�����ͳɼ�������ʹ�ö�̬�ڴ������ʵ�֡�

�����ʽ��
�����һ�����ȸ���һ��������N����ʾѧ���ĸ�����������һ�и���N��ѧ���ĳɼ������ּ��Կո�ָ���

�����ʽ��
�������¸�ʽ�����

average = ƽ���ɼ�
max = ��߳ɼ�
min = ��ͳɼ�
�����������λС����

����������
3
85 90 95
���������
average = 90.00
max = 95.00
min = 85.00*/
#include<stdio.h>
int main()
{
	int N,i,sum=0;
	double average,max,min;
	scanf("%d",&N);
	int a[N];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	max=a[0];
	min=a[0];
	average=(1.0)*sum/N;
	for(i=1;i<N;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
	}
	printf("average = %.2lf\nmax = %.2lf\nmin = %.2lf",average,max,min);
	return 0;
}
