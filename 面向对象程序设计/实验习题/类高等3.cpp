/*�����˻����������죩������ģ�⡿
��Ŀ����

�����˻����������ʡ����롢���͵����ԣ����к��ǹ̶�8λ���������ͱ�ʾ���˻�����ҵ�˻�������Ǹ�����P��ʶ����ҵ��E��ʶ��

�˻��ַ�Ϊ�����˻��Ͷ����˻�����������Ϊ0.5%����������Ϊ1.5%��

�˻������м�Ϣ����ѯ��������Ϣ�����Ǹ������ʼ�����Ϣ��������Ϣ���ӵ�����У����������Ϣ�������ѯ����������˻���ȫ����Ϣ��

����һ�������˻�����ͨ�����캯����ʼ���������ԡ�Ȼ��ͨ����������������һ�������˻�����Ϣ������˻�������ͬ����֮ͬ�������������˻������ǻ����˻������50000000��7��0���������Ƕ������ʡ�

Ҫ���������ݳ�Ա����˽������

��C++���Ե��������˼������д����ʵ������Ҫ��

 

 


����

������Ը���t����ʾ��t�������˻�

������һ�������˻����˻����롢�˻����͡����������봴�������˻��Ͷ����˻���

����������������������һ���������Ի����˻��������ڶ����������Զ����˻����в������������д��ĸC��ʾ��Ϣ�������������д��ĸP��ʾ��ѯ����

�Դ��������������˻�����Ϣ�Ͳ���

 

 


���

ÿ�������һ�Ի����˻��Ͷ����˻��Ĳ��������

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
12345678 P 10000
C P
23456789 E 20000
P C

�������1
Account=12345678--sum=10050
Account=62345678--Person--sum=10000--rate=0.015
Account=23456789--Enterprise--sum=20000--rate=0.005
Account=73456789--sum=20300

*/
#include<iostream>
#include<string.h>
using namespace std;
class zhanghu
{
public:
    void print()
    {
        if (userkind == 'P')
            cout << "Account=" << number << "--" << "Person--sum=" << sum << "--rate=" << ((moneykind == 'D') ? deaddiscout : livediscout )<< endl;
        else if(userkind =='E')
            cout << "Account=" << number << "--" << "Enterprise--sum=" << sum << "--rate=" << ((moneykind == 'D') ? deaddiscout : livediscout) << endl;
    }
    void suan()
    {
        sum = sum + sum * ((moneykind == 'D') ? deaddiscout : livediscout);
        cout << "Account=" << number << "--sum=" << sum << endl;
    }
    zhanghu(int number1,char kind1,double sum1):number(number1),userkind(kind1),sum(sum1)
    {
        moneykind= 'H';
    }
    ~zhanghu() {};
    zhanghu(zhanghu& a)
    {
        sum = a.sum;
        number = a.number + 50000000;
        userkind = a.userkind;
        moneykind = 'D';
    }

private:
    double sum;
    int number;
    char userkind;
    char moneykind;
    static double livediscout;
    static double deaddiscout;
};
double zhanghu::livediscout = 0.005;
double zhanghu::deaddiscout = 0.015;
void operation(zhanghu* p,char kind)
{
    if (kind == 'C') p->suan();
    else if (kind == 'P') p->print();
}
int main()
{
    int t;
    cin >> t;
    
    while (t--)
    {
        int number;
        char userkind;
        double sum;
        cin >> number >> userkind >> sum;
        zhanghu item1(number, userkind, sum);
        zhanghu item2(item1);
        char kind1, kind2;
        cin >> kind1 >> kind2;
        operation(&item1, kind1);
        operation(&item2, kind2);

    }
    return 0;
}
