/*
�����������������
��Ŀ����

�������������彡���ж��ָ�꣬����BMI����֬�ʵ�
���һ�����彡���࣬����˽�г�Ա�����������(��)������(����)����Χ(����)��ʵ���������з������£�
BMI����������BMI��ֵ(�������������뵽��λ)�����㹫ʽBMI= ���� / ��ߵ�ƽ��
��֬�ʷ�����������֬����ֵ(������)������������£�
1������a=��Χ��cm����0.74
2������b=���أ�kg����0.082+34.89
3����֬��������kg��=a��b
4����֬�� = ��֬������������
��������������Ҫ���ж���
 
 


����

��һ������t��ʾ��t������ʵ��
�ڶ�����ÿ�������ĸ���������������ߡ����ء���Χ����������󳤶Ȳ�����20
��������t��
 
 


���

���t�У�ÿ������һ��ʵ����BMI����֬�ʣ�BMI�������뵽��λ����֬��С����ֵ��ȷ��С�����2λ
 




�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
�Ÿ� 1.85 78.5 85.2
��Բ 1.55 67.6 77.3

�������1
�Ÿߵ�BMIָ��Ϊ23--��֬��Ϊ0.28
��Բ��BMIָ��Ϊ28--��֬��Ϊ0.25
*/
 #include<iostream>
#include<string.h>
#include <math.h>
#include <iomanip>
using namespace std;
class People
{
public:
	float healthy()
	{
		return weight / pow(height, 2);
	}
	float physic()
	{
		float a = waistline * 0.74;
		float b = weight * 0.082 + 34.89;
		float c = a - b;
		return c / weight;
	}
	void input(char a[], float b, float c, float d)
	{
		strcpy(name, a);
		height = b;
		weight = c;
		waistline = d;
	}
	char* NAME()
	{
		return name;
	}
private:
	char name[20];
	float height;
	float weight;
	float waistline;
};

int main()
{
	int t, i;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		People people;
		char a[20];
		float b;
		float c;
		float d;
		cin >> a >> b >> c >> d;
		people.input(a, b, c, d);
		cout<<people.NAME() << "��BMIָ��Ϊ" <<  fixed << setprecision(0)<<people.healthy() << "--" << "��֬��Ϊ" << fixed << setprecision(2)<< people.physic() << endl;
	}
}
