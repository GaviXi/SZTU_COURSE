/*7-3 ͳ�������ַ��Ϳո�
���� 15
���� ����
��λ ������ѧԺ
����Ҫ���д��������һ���ַ���ͳ�����������ַ����ո�������ַ��ĸ���������ʹ��switch����д��

�����ʽ:
������һ���и��������ַ������һ���س���ʾ����������������ڡ�

�����ʽ:
��һ���ڰ���

blank = �ո����, digit = �����ַ�����, other = �����ַ�����
�ĸ�ʽ�������ע�⣬�Ⱥŵ����Ҹ���һ���ո񣬶��ź���һ���ո�

��������:
���������һ�����롣���磺

Reold 12 or 45T
�������:
�����������Ӧ����������磺

blank = 3, digit = 4, other = 8*/ 
#include<stdio.h>
int main()
{
	int blank=0,digit=0,other=0;
	char op;
	while((op=getchar())!='\n')
	{
		switch(op)
		{
			case' ':blank=blank+1;break;
			case '0':digit=digit+1;break;
			case '1':digit=digit+1;break;
			case '2':digit=digit+1;break;
			case '3':digit=digit+1;break;
			case '4':digit=digit+1;break;
			case '5':digit=digit+1;break;
			case '6':digit=digit+1;break;
			case '7':digit=digit+1;break;
			case '8':digit=digit+1;break;
			case '9':digit=digit+1;break;
			default:other=other+1;
		}
	}
	printf("blank = %d, digit = %d, other = %d",blank,digit,other);
	return 0;
}
