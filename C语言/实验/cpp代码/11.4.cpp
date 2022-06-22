/*英语老师要求学生按照如下规则写一串字母：

如果写了某个大写字母，下一个就必须写同个字母的小写，或者写字母表中下一个字母的大写；
如果写了某个小写字母，下一个就必须写同个字母的大写，或者写字母表中前一个字母的小写；
当然也可以什么都不写，就结束这个字母串。
例如 aAaABCDdcbBC 就是一个合法的字母串；而 dEFfeFGhI 就是非法的。注意 a 没有前一个字母， Z 也没有下一个字母。

现在面对全班学生交上来的作业，老师请你写个程序自动批改。

输入格式：
输入在第一行给出一个不超过 100 的正整数 N。随后 N 行，每行给出一位学生的作业，即仅由英文字母组成的非空字母串，长度不超过 2×10 
6
 。

输出格式：
对每位学生的作业，如果正确就在一行中输出 Y，否则输出 N。

输入样例：
2
aAaABCDdcbBC
dEFfeFGhI
输出样例：
Y
N*/
#include<stdio.h>
int main()
{
 int j,N;
 scanf("%d",&N);    //N个作业  
 getchar();    //吃掉回车符 
 for(j=0;j<N;j++)   //执行N-1次 
 {
  int i,count=0;   
  char str[3000001];
  gets(str);   //输入字符串 
  for(i=1;str[i]!='\0';i++)   //判断作业对错 
  {
   if(str[i-1]=='a')
   {
    if(str[i]=='A') count++;
   }
   else if(str[i-1]=='Z')
   {
    if(str[i]=='z') count++;
   }
   else
   {
    if(str[i-1]>='b' && str[i-1]<='z')
    {
     if(str[i]==str[i-1]-32 || str[i]==str[i-1]-1) count++;
    }
    else if(str[i-1]>='A' && str[i-1]<='Y')
    {
     if(str[i]==str[i-1]+32 || str[i]==str[i-1]+1) count++;   
    }
   }
  }
   //输出结果 
  if(count!=(i-1)) printf("N\n");
  else printf("Y\n");
 } 
 return 0;
}
