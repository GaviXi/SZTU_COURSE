/*��Ŀ����

����Ҫ��ʵ�ֺ������һ��ʵ�ĵ��ַ����Σ����岢���ú���matrix(length, width, ch)�����Ĺ���������Ļ����ʾ����Ϊwidth������Ϊlength�����ַ�ch��ɵ�ʵ�ľ���ͼ����

�����ӿڶ��壺
 void matrix(int length, int width, char ch);
����length�Ǿ���ĳ��ȣ�width�Ǿ���Ŀ�ȣ�ch��������ַ���Ҫ����������������ʾ�ĸ�ʽ����ӡ������Ϊwidth������Ϊlength�����ַ�ch��ɵ�ʵ�ľ���ͼ����

�������ο��������£�

?void matrix(int length, int width, char ch);

int main()

{    

    int length, width;

    char ch;

    scanf("%d %d %c", &length, &width, &ch);

    matrix(length, width, ch);

    return 0;

}


����

?


���

�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
4 2 H
�������1
HHHH
HHHH
*/
#include<stdio.h>
void matrix(int length,int width,char ch);
int main()
{
	int length,width;
	char ch;
	scanf("%d %d %c",&length,&width,&ch);
	matrix(length,width,ch);
	return 0;
}
void matrix(int length,int width,char ch)
{
    int num,i;
    num=length*width;
    for(i=1;i<=num;i++)
    {
    	if(i%length==0)
    	{
    		printf("%c\n",ch);
		}
		else
		{
			printf("%c",ch);
	    }
	}
}
