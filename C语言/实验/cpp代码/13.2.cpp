/*�������´��룬������ָ�����ַ��
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
���ݵ��ϴ����д���������������������ָ�뽻��������ֵ���ֱ��������ǰ�ͽ������ֵ��

��������:
5 8
�������:
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
