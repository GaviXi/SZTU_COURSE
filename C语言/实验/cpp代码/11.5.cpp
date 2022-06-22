/*7-5 凯撒密码
分数 20
作者 颜晖
单位 浙大城市学院
为了防止信息被别人轻易窃取，需要把电码明文通过加密方式变换成为密文。输入一个以回车符为结束标志的字符串（少于80个字符），再输入一个整数offset，用凯撒密码将其加密后输出。恺撒密码是一种简单的替换加密技术，将明文中的所有字母都在字母表上偏移offset位后被替换成密文，当offset大于零时，表示向后偏移；当offset小于零时，表示向前偏移。

输入格式:
输入第一行给出一个以回车结束的非空字符串（少于80个字符）；第二行输入一个整数offset。

输出格式:
输出加密后的结果字符串。

输入样例1:
Hello Hangzhou
2
输出样例1:
Jgnnq Jcpibjqw
输入样例2:
a=x+y
-1
输出样例2:
z=w+x*/
#include<stdio.h>
#include<math.h>
int main()
{
    int i,j,k,offset;
    char c[82];
    i = 0;
    c[i] =getchar(); 
    while(c[i] != '\n'){
     i++;
     c[i] = getchar();
  }
  c[i] = '\0' ;
 scanf("%d",&offset);
 if(abs(offset) >= 26){
  offset = offset%26 ;
 }
  if(offset > 0){
   for(i =0 ;c[i] != '\0';i++){
   if(c[i] >= 'A' && c[i] <= 'Z'){
    if((c[i] -'A'+ offset) < 26){
     c[i] = c[i] + offset ;
    }else{
     c[i] = c[i] - (26-offset);
    }
   }else if(c[i] >= 'a' && c[i] <= 'z'){
    if((c[i] -'a'+ offset) < 26){
     c[i] = c[i] + offset ;
    }else{
     c[i] = c[i] - (26-offset);
    }
   }
  }
  }else if(offset < 0){
   for(i =0 ;c[i] != '\0';i++){
   if(c[i] >= 'A' && c[i] <= 'Z'){
    if((c[i] -'A'+ offset) >= 0){
     c[i] = c[i] + offset ;
    }else{
     c[i] = c[i] + (26+offset);
    }
   }else if(c[i] >= 'a' && c[i] <= 'z'){
    if((c[i] -'a'+ offset) >= 0){
     c[i] = c[i] + offset ;
    }else{
     c[i] = c[i] + (26+offset);
    }
   }
  }
  }
 for(i =0 ;c[i] != '\0';i++){
  putchar(c[i]);
 }
    return 0;
}
