/*�����ֵ��Сֵ�����ã�
��Ŀ����

��д����void find(int *num,int n,int &minIndex,int &maxIndex)��������num(Ԫ��Ϊnum[0]��num[1]��...��num[n-1]����ȡ��Сֵ�����ֵ��Ԫ���±�minIndex,maxIndex��������ͬ��ֵ��ȡ��һ�����ֵ��±ꡣ��

����n����̬����n�������ռ䣬����n�����������øú������������Сֵ�����ֵ�±ꡣ���������ʽ��������

�ı亯��find���ܲ��Ʒ֡�


����

���Դ���

ÿ���������һ�У����ݸ���n�����n������


���

ÿ���������������У��ֱ�����Сֵ�����ֵ�����±ꡣ�����ʽ�������������������֮���Կ��зָ���

 

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
5 10 20 40 -100 0
10 23 12 -32 4 6 230 100 90 -120 15
�������1
min=-100 minindex=3
max=40 maxindex=2

min=-120 minindex=8
max=230 maxindex=5
*/
#include<iostream>
using namespace std;
void find(int* num, int n, int& minindex, int& maxindex);
int main(void)
{
	int i, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		int n,k,min,max;
		cin >> n;
		int* number = new int[n];
		for (k = 0; k < n; k++)
			cin >> *(number + k);
		find(number, n, min, max);
		cout << "min=" <<number[min]<< " " << "minindex=" << min << endl
			<< "max=" <<number[max]<< " " << "maxindex=" << max << endl;
		cout << endl;
	}

	return 0;
}

void find(int* num, int n, int& minindex, int& maxindex)
{
	int j;
	minindex = 0;
	maxindex = 0;
	int small = *(num);
	int big = *(num);
	for (j = 0; j < n; j++)
	{
		if (*(num + j) < small)
		{
			minindex = j;
			small = *(num + j);
		}
		if (*(num + j) > big)
		{
			maxindex = j;
			big = *(num + j);
		}

	}
}
