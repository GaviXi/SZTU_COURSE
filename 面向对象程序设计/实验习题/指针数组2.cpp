/*�ַ����Ƚϣ�ָ�����ַ���
��Ŀ����

��дһ�������Ƚ������ַ����������������ַ�ָ�루Ҫ����ʽ���壬����char *S, char *T)���Ƚ��ַ���S��T�Ĵ�С�����S����T���򷵻�1�����SС��T�򷵻�-1�����S��T����򷵻�0��

�ȽϹ���

1.�������ַ�������ͬλ���ϵ��ַ����бȽϣ��ַ��Ĵ�С�Ƚ���ASCIIֵΪ׼

 

2.�ڱȽ��У�����ַ���S���ַ������ַ���T���ַ�����������С�ڵ�����������ΪS����T�����������S����T�����С����SС��T

����SΪaaccdd��TΪeebbbb��ÿ��λ�ñȽϵõ�Sǰ������ĸ��С��T������4����ĸ������T��������ΪS����T

3.��������ַ������Ȳ�ͬ����������ַ���Ϊ��

�������������������ַ����������øú��������жϣ����жϺ����б���ʹ�ú���������ָ������ַ��Ƚ�

 


����

����t��ʾ��t������ʵ��

����ÿ�������������ַ������ַ�������󳤶Ȳ�����20

��������t��ʵ��

 


���

ÿ�����һ��ʵ���ıȽϽ��

 

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 
3
aaccdd
eebbbb
AAbb++
aaEE*-
zznnkk
aaaaaaa

�������1
1
0
-1

��������2 
2
aaaaaaa
zznnkk
eebbbb
aaccdd
�������2
1
-1*/
#include<iostream>
#include<string.h>
using namespace std;
int cmp(char *S,char *T);
int main(void)
{
	int t,i;
	char p[21];
	char q[21];
	cin>>t;
	for(i=0;i<t;i++)
	{
		cin>>p;
		cin>>q;
		cout<<cmp(p,q)<<endl;
	}
	return 0;
}

int cmp(char *S,char *T)
{
	char *a = S;
	char *b = T;
	int num1=0;
	int num2=0;
	int n;
	
	if(strlen(S)>strlen(T)) return 1;
	else if(strlen(S)<strlen(T)) return -1;
	while(*a !='\0')
	{
		if(*a>*b) num1++;
		else if(*a<*b) num2++;
		b++;
		a++;
	}
	if(num1>num2) return 1;
	else if(num1<num2) return -1;
	else return 0;
	
}

