/*����һ����#�������ַ���������Ҫ����ȥ���еķ�ʮ�������ַ������ִ�Сд�������һ���µı�ʾʮ���������ֵ��ַ�����Ȼ����ת��Ϊʮ�����������������ڵ�һ��ʮ�������ַ�֮ǰ�����ַ���-�������������Ǹ�����

�����ʽ��
������һ���и���һ����#�����ķǿ��ַ�����

�����ʽ��
��һ�������ת�����ʮ����������Ŀ��֤����ڳ����ͷ�Χ�ڡ�

����������
+-P-xf4+-1!#
���������
-3905*/
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j=0,k,n=0,flag=1,flag2=0,num,sum=0; 
	char a[500]; //����������ַ��� 
	char b[500];//����ժȡ������16���Ƶ����ַ��� 
	for(i=0;i<=500;i++)//����ѭ����a�ַ�����ֵ 
	{
		scanf("%c",&a[i]);
		if(a[i]=='#')//����������n���ַ� 
		{
			num=i;
			break;
		}
	}
	for(i=0;i<num+1;i++)// ��������ַ�����ʼժȡѡ�� 
	{
		if(a[i]=='-'&&flag==1)//����ʮ�������ַ�ǰ�и��ŵĻ���¼���� 
		{
		    flag2=1;
	    }
	    else if(a[i]=='+'&&flag==1)
	    {
	    	flag2=0;
		}
	    else if(a[i]>='0'&&a[i]<='9'||a[i]>='a'&&a[i]<='f'||a[i]>='A'&&a[i]<='F')//����ʮ�������ַ�����b�ַ������и�ֵ 
	    {
	    	flag=0;
	    	if(a[i]>='A'&&a[i]<='F')
	    	{
	    		b[j]=a[i]+32;
			}
			else 
			{
				b[j]=a[i];
		    }
		    j++;
	    }
		else if(a[i]=='#')//��ֹ��ֵ����¼b�ж��ٸ��ַ� 
		{
			num=j;
		}
	}
	if(num==1&&b[0]=='0'||num==0)
	{
		printf("0");
		return 0;
	}
	for(k=num-1;k>=0;k--)//b�ַ���ʮ�����ƻ���ʮ���ƣ��ó���� 
	{
		switch(b[k])
		{
			case '0':sum=sum;break;
			case '1':sum=sum+pow(16,n);break;
			case '2':sum=sum+2*pow(16,n);break;
			case '3':sum=sum+3*pow(16,n);break;
			case '4':sum=sum+4*pow(16,n);break;
			case '5':sum=sum+5*pow(16,n);break;
			case '6':sum=sum+6*pow(16,n);break;
			case '7':sum=sum+7*pow(16,n);break;
			case '8':sum=sum+8*pow(16,n);break;
			case '9':sum=sum+9*pow(16,n);break;
			case 'a':sum=sum+10*pow(16,n);break;
			case 'b':sum=sum+11*pow(16,n);break;
			case 'c':sum=sum+12*pow(16,n);break;
			case 'd':sum=sum+13*pow(16,n);break;
			case 'e':sum=sum+14*pow(16,n);break;
			case 'f':sum=sum+15*pow(16,n);break;
		}
		n++;
	}
	if(num>=1)
	{
		if(flag2==1)
	    {
	    	printf("-%d",sum);//���и��ű�־����������żӽ�� 
    	}
    	else if(flag2==0)
    	{
	    	printf("%d",sum);
    	}
  	}
	return 0;
} 
