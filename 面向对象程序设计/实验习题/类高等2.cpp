/*����绰��������������������ģ�⡿
��Ŀ����

����绰�������ԣ��绰�š�״̬������������
1���绰����һ���࣬��������������ͣ����к������������ͣ������õ�����ĸ��ʾ�û����A��ʾ������B��ʾ��ҵ��C��ʾ���ˡ�������������졢���ԵĻ�ȡ�����õȷ�����������Ҫ���б�д��
2��״̬��һ�����ֱ�ʾ��1��ʾ���ã�0��ʾδ�ã�
3������������һ���ַ���
 

�绰�������������졢��������ӡ�Ͳ�ѯ��
1�����캯����Ҫ���Ǹ������Ա�Ĺ��죬���������ʾ��Ϣ������绰����Ϊ12345678�����캯�����"12345678 constructed."
2����ӡ������绰�������Ϣ����������绰״̬�����������use��״̬��δ�������unuse�������ʽ��ʾ����
3�����������������ʾ��Ϣ������绰��Ϊ12345678���������������"12345678 destructed. "
4����ѯ�����Ǹ��ݸ����ĺ����ѯ�绰������绰�������͸������벻��ͬ���򷵻�0������绰�������͸���������ͬ���򷵻�1
 

��C++���������˼��ʵ������Ҫ��
1������������ݣ����������绰���󣬲�ͨ�����췽����ʼ����
2���������ɸ��绰���룬ͨ����ѯ������ѯ��Щ�����Ƿ��������绰�����У�������������"wrong number."����������ô�ӡ��������绰��Ϣ�����忴���������

����

ͷ�������������绰��Ϣ��ÿ�а����绰���롢�绰���͡�״̬����������������������󳤶�Ϊ20

����һ������t����ʾ��t������Ҫ��ѯ

����t������t���绰����

 


���

t�����t������Ĳ�ѯ���


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
80000001 A 1 tom
80000002 B 0 ken
80000003 C 1 mary
3
50000002
80000003
80000002

�������1
80000001 constructed.
80000002 constructed.
80000003 constructed.
wrong number.
Phone=80000003--Type=C--State=use--Owner=mary
Phone=80000002--Type=B--State=unuse--Owner=ken
80000003 destructed.
80000002 destructed.
80000001 destructed.
*/
#include<iostream>
#include<string.h>
using namespace std;
class Vphone;
class phone
{
public:
    phone(int num1, char kind1) :num(num1), kind(kind1)
    {
        
    }
    friend Vphone;

private:
    int num;
    char kind;
};

class Vphone
{
public:
    Vphone(int num1, char kind1, int state1, string name1) :PHO(num1, kind1), state(state1), name(name1) 
    {
        cout <<num1<< " constructed." << endl;
    }
    void print()
    {
        if (state == 1) cout << "Phone=" << PHO.num << "--" << "Type=" << PHO.kind << "--" << "State=" << "use--Owner=" << name << endl;
        else
        {
            cout << "Phone=" << PHO.num << "--" << "Type=" << PHO.kind << "--" << "State=" << "unuse--Owner=" << name << endl;
        }
    }
    ~Vphone()
    {
        cout << PHO.num << " destructed." << endl;
    }
    int check(int phone1)
    {
        if (phone1 == PHO.num) return 1;
        else return 0;
    }
private:
    phone PHO;
    int state;
    string name;
};







int main()
{
    int num1, num2, num3;
    char kind1, kind2, kind3;
    int state1, state2, state3;
    string name1, name2, name3;
    cin >> num1 >> kind1 >> state1 >> name1;
    cin >> num2 >> kind2 >> state2 >> name2;
    cin >> num3 >> kind3 >> state3 >> name3;
    Vphone phone1( num1,  kind1,  state1,  name1);
    Vphone phone2( num2,  kind2,  state2,  name2);
    Vphone phone3( num3,  kind3,  state3,  name3);
    int t;
    cin >> t;
    while (t--)
    {
        int number;
        cin >> number;
        if (phone1.check(number))
        {
            phone1.print();
            continue;
        }
        else if (phone2.check(number))
        {
            phone2.print();
            continue;
        }
        else if (phone3.check(number))
        {
            phone3.print();
            continue;
        }
        else
        {
            cout << "wrong number." << endl;
        }
    }
    return 0;
}
