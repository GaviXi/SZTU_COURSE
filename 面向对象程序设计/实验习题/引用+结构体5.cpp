/*��Ϯ���ң��ṹ��+ָ��+������
��Ŀ����

��֪һȺѧ���Ŀ����Ծ�Ҫ����Ծ����ݽ��жԱȣ������Ƿ��г�Ϯ��

ÿ���Ծ������ѧ�ţ��������ͣ�����Ŀ1�𰸣��ַ������ͣ�����Ŀ2�𰸣��ַ������ͣ�����Ŀ3�𰸣��ַ������ͣ�

Ҫ��ʹ�ýṹ�����洢�Ծ����Ϣ������һ������������ֵΪһ�������������������ṹ��ָ�룬���������ǱȽ������Ծ��ÿ����Ŀ�Ĵ𰸣������ͬ��ŵĴ����ƶȳ���90%����ô����Ϊ�г�Ϯ���������س�Ϯ��ţ����򷵻�0�����ƶ���ָ��ͬһ��Ŀ�У������𰸵����λ���ϵ��ַ������Ƚϣ���ͬ���������ڵ�����һ���𰸵ĳ��ȵ�90%������Ϊ��Ϯ��

 


����

��һ������t��ʾ��t���Ծ�

�ڶ��������1���Ծ��ѧ��ѧ��

�����������1���Ծ����Ŀ1�𰸣���󳤶Ȳ�����100

�����������1���Ծ����Ŀ2�𰸣���󳤶Ȳ�����100

�����������1���Ծ����Ŀ3�𰸣���󳤶Ȳ�����100

ÿ���Ծ��Ӧ4������

��������t���Ծ������


���

��һ���У��ѷ��ֳ�Ϯ������ѧ�ź���Ŀ�������ֻ�����һ�η��ֳ�Ϯ����ţ�����֮���õ����ո����

�����������Ŀ1��Ϯ����Ŀ��Ϊ1���Դ�����

���˳���������ѧ��˳��������


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
5
2088150555
aabcdef11
ZZ887766dd
cc33447799ZZ
2088150333
abcdef00
AABBCCDDEE
ZZ668899cc
2088150111
AABBCCDDEE
ZZ668899cc
abcdef00
2088150222
AABBCFDDeE
ZZ889966dd
abcdef000
2088150444
aabcdef00
AABBCDDDEE
cc668899ZZ

�������1
2088150333 2088150444 2
2088150111 2088150222 3

*/
#include <iostream>
#include<string.h>
#include<math.h>
using namespace std;
struct paper
{
	int number;
	char q1[101];
	char q2[101];
	char q3[101];
};
int haha(paper* p, paper* q);
int main()
{
	int t, i, k;
	cin >> t;
	paper* qq = new paper[t];
	for (i = 0; i < t; i++)
	{
		cin >> (qq + i)->number >> (qq + i)->q1 >> (qq + i)->q2 >> (qq + i)->q3;
	}
	for (i = 0; i < t-1; i++)
	{
		for (k = i+1; k < t; k++)
		{
			if (haha(qq + i, qq + k))
			{
				cout << (qq + i)->number << " " << (qq + k)->number << " " << haha(qq + i, qq + k) << endl;
			}
		}
	}
}

int haha(paper* p, paper* q)
{
	int j;
	int num1 = strlen(p->q1);
	int num2 = strlen(q->q1);
	int num3 = strlen(p->q2);
	int num4 = strlen(q->q2);
	int num5 = strlen(p->q3);
	int num6 = strlen(q->q3);
	int one = 0;
	int two = 0;
	int three = 0;
	for (j = 0; j < min(num1,num2); j++)
	{
		if (*((p->q1) + j) == *((q->q1) + j)) one++;
	}
	for (j = 0; j < min(num3,num4); j++)
	{
		if (*((p->q2) + j) == *((q->q2) + j)) two++;
	}
	for (j = 0; j < min(num5,num6); j++)
	{
		if (*((p->q3) + j) == *((q->q3) + j)) three++;
	}
	if (one >= num1 * 0.9 || one >= num2 * 0.9) return 1;
	else if (two >= num3 * 0.9 || two >= num4 * 0.9) return 2;
	else if (three >= num5 * 0.9 || three >= num6 * 0.9) return 3;
	else return 0;
	

}
