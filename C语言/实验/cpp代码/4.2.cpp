/*7-2 �ɼ�ת��
���� 10
���� ���
��λ �㽭��ѧ
����Ҫ���д����һ���ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������

���ڵ���90��ΪA��
С��90�Ҵ��ڵ���80ΪB��
С��80�Ҵ��ڵ���70ΪC��
С��70�Ҵ��ڵ���60ΪD��
С��60ΪE��
�����ʽ:
������һ���и���һ�������İٷ��Ƴɼ���

�����ʽ:
��һ���������Ӧ������Ƴɼ���

��������:
90
�������:
A*/ 
#include<stdio.h>
int main()
{
	int grade,c;
	scanf("%d",&grade);
	c=grade/10;
	switch(c)
	{
		case 10:printf("A");break;
		case 9:printf("A");break;
		case 8:printf("B");break;
		case 7:printf("C");break;
		case 6:printf("D");break;
		case 5:
		case 4:
		case 3:
		case 2:
		case 1:
		case 0:printf("E");break;
	}
	return 0;
}
