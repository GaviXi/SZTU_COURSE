/*СƱ����������ṹ�壩
��Ŀ����

   �����˵�����ϰ�ߴ����ˢ�����ѣ��̼һ�ͨ��POS����ִһ��СƱ�������̼����ơ��ն˺š�����Ա������������Ч�ڡ����š�����ʱ�䡢���ѽ�����Ϣ�����̼���Ϣ����Ϊһ��Struct�ṹ������Ҫ�������Ӧ�ĸ�ʽСƱ��

 


����

 ��һ���������Ѵ�����ˢ��������

 �ڶ�����������СƱ�����ĸ������ԣ���󳤶Ȳ�����30.

��������ڶ������ƣ��Դ����ơ�����

 


���

����������Ϣ�������������ˢ����Ϣ$

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
TianHong 00001 01 CCB 21/06 6029071012345678 2016/3/13 1000.00
Cindy 00002 02 CCB 21/07 6029071055558888 2015/3/13 50.00
�������1
Name: TianHong
Terminal: 00001 operator: 01
Card Issuers: CCB Validity: 21/06
CardNumber: 6029********5678
Traded: 2016/3/13
Costs: $1000.00

Name: Cindy
Terminal: 00002 operator: 02
Card Issuers: CCB Validity: 21/07
CardNumber: 6029********8888
Traded: 2015/3/13
Costs: $50.00
*/ 
#include<iostream>
using namespace std;

struct note
{
	char Name[31];
	char Terminal[31];
	char Operator[31];
	char CardIssuers[31];
	char Validity[31];
	char CardNumber[31];
	char Traded[31];
	char Costs[31];
};


int main(void)
{
	int i, k, t;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		note tip;
		cin >> tip.Name >> tip.Terminal >>tip.Operator >>tip.CardIssuers >>tip.Validity >>tip.CardNumber >> tip.Traded >> tip.Costs;
		cout << "Name:" << " " << tip.Name << endl
			<< "Terminal:" << " " << tip.Terminal << " " << "operator:" << " " << tip.Operator << endl
			<< "Card Issuers:" << " " << tip.CardIssuers << " " << "Validity:" << " " << tip.Validity << endl
			<< "CardNumber:" << " ";
		for (k = 0; k < 16; k++)
		{
			if (0 <= k && k <= 3 || 12 <= k && k <= 15)
			{
				cout << tip.CardNumber[k];
			}
			else cout << "*";
		}
		cout<<endl<< "Traded:" << " " << tip.Traded << endl
			<< "Costs:" <<" $"<< tip.Costs << endl;
		cout << endl;
	}
}
