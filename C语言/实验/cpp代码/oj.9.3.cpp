/*��Ŀ����

����Ҫ��ʵ��һ�����������������Լ���ļ򵥺�����

�����ӿڶ��壺
int gcd( int x, int y );
����x��y������������������gcdӦ�����������������Լ����

�������ο��������£�

int gcd( int x, int y );

int main()

{

    int x, y;

    scanf("%d %d", &x, &y);

    printf("%d\n", gcd(x, y));

    return 0;

}


����

���

�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
32 72
�������1
8
*/
#include<stdio.h>
#include <math.h>
int gcd(int x,int y);
int main()
{
 int x,y;
 scanf("%d %d",&x,&y);
 printf("%d\n",gcd(x,y));
 return 0;
}
int gcd(int x,int y)
{
 int i,j,k;
 int flag=0;
 for(i=x;i>=1;i--)
 {
  if(x%i==0)
  {
   for(j=x;j>=1;j--)
   {
    if(y%j==0&&i==j)
    {
        k=i;
        flag=1;
  break;
    }
   }
  }
  if(flag==1){
   break;
  }
 }
 return k;
}
