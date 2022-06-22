/*分析以下代码，体会理解指针与地址。
#include<stdio.h>
int main(){
    int a=5,b=8,t;
    int *pa,*pb;
    pa=&a; pb=&b;
    printf("%ld,%ld\n",&a,&b);
    printf("%ld,%ld\n",pa,pb);
    t=*pa;  *pa=*pb;  *pb=t;
    printf("%d,%d\n",a,b);
    return 0;    
}
根据地上代码编写程序读入两个整数，利用指针交换变量的值，分别输出交换前和交换后的值。

输入样例:
5 8
输出样例:
a=5,b=8
a=8,b=5*/
#include<stdio.h>
int main()
{
	int a,b,t;
	int *pa=&a,*pb=&b;
	scanf("%d %d",&a,&b);
	printf("a=%d,b=%d\n",a,b);
	t=*pa;  
	*pa=*pb;  
	*pb=t;
    printf("a=%d,b=%d",a,b);
    return 0;  
}
