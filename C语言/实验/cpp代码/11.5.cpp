/*7-5 ��������
���� 20
���� ����
��λ ������ѧԺ
Ϊ�˷�ֹ��Ϣ������������ȡ����Ҫ�ѵ�������ͨ�����ܷ�ʽ�任��Ϊ���ġ�����һ���Իس���Ϊ������־���ַ���������80���ַ�����������һ������offset���ÿ������뽫����ܺ����������������һ�ּ򵥵��滻���ܼ������������е�������ĸ������ĸ����ƫ��offsetλ���滻�����ģ���offset������ʱ����ʾ���ƫ�ƣ���offsetС����ʱ����ʾ��ǰƫ�ơ�

�����ʽ:
�����һ�и���һ���Իس������ķǿ��ַ���������80���ַ������ڶ�������һ������offset��

�����ʽ:
������ܺ�Ľ���ַ�����

��������1:
Hello Hangzhou
2
�������1:
Jgnnq Jcpibjqw
��������2:
a=x+y
-1
�������2:
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
