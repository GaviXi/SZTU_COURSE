/* �ùݹ˿�ͳ�ƣ���̬��Ա��
��Ŀ����

��д����ͳ��ĳ�ù�ס�޿��˵������������ܶҪ��������˵�������������˱�ţ�2015+˳��ţ�˳���4λ�����1λΪ0001����2λΪ0002���������ƣ����������������Լ������ܶ�������������ܶ��þ�̬��Ա���������Բ�����ͨ�����ݳ�Ա���ù����������£�

class Hotel
{
private:
    static int totalCustNum; // �˿�������
    static float totalEarning; // �õ�������
    static float rent; // ÿ���˿͵ķ���
    char *customerName; // �˿�����
    int customerId; // �˿ͱ��
public:
    // totalCustNum++��customerId����totalCustNum����
    Hotel(char* customer);
    ~Hotel(); //�ǵ�delete customerName
    void Display(); //��Ӧ����˿��������˿ͱ�š���������������
};

����

��1�У������ùݵ����˿ͷ���

��2�п�ʼ����������˿�������0��ʾ�������, ����������ַ�����Ϊ20

 

 


���

ÿ����������˿���Ϣ�͵�ǰ�ù���Ϣ�������˿��������˿ͱ�ţ��ùݵ�ǰ���������ùݵ�ǰ�����롣

 

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
150  
���� ���� ���� 0
�������1
���� 20150001 1 150
���� 20150002 2 300
���� 20150003 3 450
*/
#include <iostream>
#include <math.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Hotel
{
private:
	static int totalCustNum; // �˿�������
	static float totalEarning; // �õ�������
	static float rent; // ÿ���˿͵ķ���
	char* customerName; // �˿�����
	int customerId; // �˿ͱ��
public:
	// totalCustNum++��customerId����totalCustNum����
	Hotel(char* customer)
	{
		customerName = new char[20];
		strcpy(customerName, customer);
		totalCustNum++;
		customerId=totalCustNum;
		totalEarning = totalEarning + rent;
	}
	~Hotel()//�ǵ�delete customerName
	{
		delete[]customerName;
	}
	void Display()//��Ӧ����˿��������˿ͱ�š���������������
	{
		cout << customerName << " " <<2015<< setw(4) << setfill('0') << customerId << " " << totalCustNum << " " << totalEarning << endl;
	}
	static void putrent(float a)
	{
		rent = a;
	}
};
int Hotel::totalCustNum = 0;
float Hotel::totalEarning = 0;
float Hotel::rent = 0;
int main(void)
{
	float money;
	cin >> money;
	Hotel::putrent(money);
	char name[20];
	cin >> name;
	while (strcmp(name, "0") != 0)
	{
		Hotel a(name);
		a.Display();
		cin >> name;
	}
    return 0;
}
