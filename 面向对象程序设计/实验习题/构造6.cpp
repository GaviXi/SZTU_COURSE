/* �ֻ����񣨹���+��������+�ѣ�
��Ŀ����

���һ������ʵ���ֻ��Ĺ��ܡ�������˽�����ԣ��������͡����롢����״̬��ͣ�����ڣ��������������졢�������졢��ӡ��ͣ����
1���������ͱ�ʾ�û����ֻ�õ�����ĸ��A��ʾ������B��ʾ��ҵ��C��ʾ����
2��������11λ��������һ���ַ�����ʾ
3������״̬��һ�����ֱ�ʾ��1��2��3�ֱ��ʾ���á�δ�á�ͣ��
4��ͣ��������һ�����ڶ���ָ�룬�ڳ�ʼ��ʱ�ó�Աָ��գ������������˽�����������գ��Լ����캯���ʹ�ӡ������
----------------------------------------
 
5�����캯�������þ��ǽ������������������ø�������ֵ,�������ʾ��Ϣ����ʾ�����
6����������������Ǹ������ж������Ϣ���������ʾ��Ϣ����ʾ�������
      ��һ��ͣ�����ڸ���θ��ƣ�û��ͣ����θ��ƣ����Ѿ�ͣ������θ��ƣ���
 
7����ӡ�����ǰѶ�����������Զ�����������ʽ��ʾ��
8��ͣ��������ͣ�õ�ǰ���룬������ͣ�����ڣ��޷���ֵ�������ǰ�״̬�ĳ�ͣ�ã���ͣ������ָ�봴��Ϊ��̬���󣬲����ݲ���������ͣ�����ڣ���������ʾ��Ϣ����ʾ�����
-------------------------------------------
 
Ҫ������������ʵ�ֺ��뱸�ݵĹ��ܣ������е������ֻ��ŵ�������Ϣ���и��ƣ������������͸ĳ�D��ʾ���ݣ����ֻ�����ĩβ����ĸX
 
 


����

��һ������t��ʾ��t������

�ڶ�������6�������������������͡����롢״̬��ͣ�����ꡢ�¡��գ��ÿո����

��������t��

 


���

ÿ��ʾ��������У��������ԭ������Ϣ�����ݺ�����Ϣ��ԭ����ͣ�������Ϣ

ÿ��ʾ��֮���ö̻��ߣ��ĸ����ָ����ʾ�����

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
A 15712345678 1 2015 1 1
B 13287654321 2 2012 12 12

�������1
Construct a new phone 15712345678
����=����||����=15712345678||State=����
Construct a copy of phone 15712345678
����=����||����=15712345678X||State=����
Stop the phone 15712345678
����=����||����=15712345678||State=ͣ�� ||ͣ������=2015.1.1
----
Construct a new phone 13287654321
����=��ҵ||����=13287654321||State=δ��
Construct a copy of phone 13287654321
����=����||����=13287654321X||State=δ��
Stop the phone 13287654321
����=��ҵ||����=13287654321||State=ͣ�� ||ͣ������=2012.12.12
----

*/
#include <iostream>
#include<string.h>
using namespace std;
class Date
{
private:
    int year;
    int month;
    int day;
public:
    Date(int a,int b,int c):year(a),month(b),day(c){}
    int getyear() { return year; }
    int getmonth() { return month; }
    int getday() { return day; }
    void print()
    {
        cout << year << "." << month << "." << day << endl;
    }
};

class Phone
{
private:
    char kind;
    char num[30];
    int  state;
    Date *date;
public:
    Phone(char a, char b[30], int c)
    {
        kind = a;
        strcpy(num, b);
        state = c;
        date = NULL;
        cout << "Construct a new phone " << num << endl;

    }
    Phone(Phone& p):date(p.date)
    {
        kind = 'D';
        strcpy(num, p.num);
        cout << "Construct a copy of phone " << num << endl;
        strcat(num, "X");
        state = p.state;
    }
    void print()
    {
        char abc[30];
        if (kind == 'A') strcpy(abc, "����");
        else if (kind == 'B') strcpy(abc, "��ҵ");
        else if (kind == 'C') strcpy(abc, "����");
        else if (kind == 'D') strcpy(abc, "����");
        if (state == 1)cout << "����=" << abc << "||����=" << num << "||" << "State=" << "����" << endl;
        else if (state == 2)cout << "����=" << abc << "||����=" << num << "||" << "State=" << "δ��" << endl;
        else if (state == 3) 
        {
            cout << "����=" << abc << "||����=" << num << "||" << "State=" << "ͣ��" << " ||ͣ������=";
            date->print();
        }
    }
    void stopphone(int a,int b,int c)
    {
        state = 3;
        date = new Date(a,b,c);
        cout << "Stop the phone " << num << endl;
    }
};
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        char kind;
        char number[30];
        int objects;
        int year, month, day;
        cin >> kind >> number >> objects >> year >> month >> day;
        Phone item1(kind, number, objects);
        item1.print();
        Phone item2(item1);
        item2.print();
        item1.stopphone(year,month,day);
        item1.print();
        cout <<"----"<< endl;
    }
    return 0;
}
