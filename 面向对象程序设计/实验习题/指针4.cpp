/*������һ��ָ�����ַ����飩
��Ŀ����

���������ַ�����ͨ��ָ���ȡ�����ַ������Ӵ����Ӵ���ָ�ַ�����������һС���֣��������Ǻϲ���һ�����ַ���

Ҫ��

1. �����ַ����Ĵ������������ʹ�����飬Ҳ���Բ���

2. ����󣬸��������ַ������Ӵ��ĳ��ȣ���������ַ����ĳ���

3. ʹ�ö�̬����ķ��������µ��ַ���������ʹ��ָ���ȡ�����ַ����Ĳ�ͬ���֣����Ҹ��Ƶ����ַ����У�Ҫ���������̶�����ʹ�������±�

4. ʹ��ָ������µ��ַ���

 


����

��һ������t��ʾ��t������ʵ��

�����������������ַ�����ÿ���ַ���������10���ַ�

�������У�ÿ����������a��b����ʾÿ���Ӵ��Ŀ�ʼ�ͽ���λ�á�ע���ַ�����λ���ǰ���һ�������1��ʼ���㣬�ͱ���е�����λ�ò�ͬ�������ַ���abcdefg����ʼλ����3������λ����5����ô�Ӵ�����cde

��������t��ʵ��

 


���

ÿ������ϲ�������ַ���

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������
2
abcdefghij
ABCDEFGHIJ
aabbccddee
3 5
2 6
8 10
AABBCCDDEE
ffgghhiijj
FFGGHHIIJJ
1 4
5 8
2 7

�������
cdeBCDEFdee
AABBhhiiFGGHHI

*/
#include<iostream>
using namespace std;
int main(void)
{
	int t,i,j,k;
	cin>>t;
	for(i=0;i<t;i++)
	{
		char *p = new char[10];
		char *q = new char[10];
		char *r = new char[10];
		for(j=0;j<10;j++)
		{
			cin>>*p++;
		}
		for(j=0;j<10;j++)
		{
			cin>>*q++;
		}
		for(j=0;j<10;j++)
		{
			cin>>*r++;
		}
		for(j=0;j<10;j++)
		{
			p--;
			q--;
			r--;
		}
		int a,b,c,d,e,f,sum=0;
		cin>>a>>b>>c>>d>>e>>f;
		sum=b-a+d-c+f-e+3;
		char *s = new char[sum];
		int count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(a<=count&&count<=b)
			{
			*s =*p;
			s++;
			}
			p++;
		}
		count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(c<=count&&count<=d)
			{
			*s =*q;
			s++;
			}
			q++;
		}
		count = 0;
		for(j=0;j<10;j++)
		{
			count++;
			if(e<=count&&count<=f)
			{
			*s=*r;
			s++;
			}
			r++;
		}
		for(j=0;j<sum;j++) s--;
		for(j=0;j<sum;j++)
		{
			cout<<*s++;
		}
		cout<<endl;	
		
	}
	return 0;
	
}
