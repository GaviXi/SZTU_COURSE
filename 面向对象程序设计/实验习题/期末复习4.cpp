/* ������������麯���Ͷ�̬��
��Ŀ����

��Ҫ����һ��ϵͳ���Գ��������״̬���й�����������Ļ����ܣ�

�����

{ �ܱ�����

����string name;//����

float length;//��

float weight;//����

CDate current;//��ʼ��¼ʱ��

��������CDate�����ꡢ�¡�������˽�����ݣ���������������Ҫ���⡣��

���У�

virtual void display(CDate day)=0;//���Ŀ������ʱ�������������

}

��PetΪ���࣬������Cat��Dog������:

Catһ������0.1�����ؼ�0.2��

Dogһ������0.2�����ؼ�0.1��

���������ಢ��д��������Ҫ������������һ������ָ��Pet *pt�����ڲ����������ݡ�

�����������������Ϣ����Ӧ����Cat������Dog����󣬲�������������ʱ������������ء�


����

��һ��Ϊ���Դ���

�ڶ����ǿ�ʼ��¼����

�ӵ�������ÿ����������ռһ�У�ÿ�и�������Ļ�����Ϣ����������ͣ�1ΪCat��2ΪDog�������֡��������ء������������ڡ�


���

Ҫ�����Ŀ�����ڳ����������������أ����Ҫ����С�����2λ��������������С�ڿ�ʼ���ڣ������error����


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
3
2019 5 5
1 tony 10 10 2018 12 30
2 jerry 5 6 2019 5 10
1 tom 3 4 2019 6 1

�������1
error
jerry after 5 day: length=6.00,weight=6.50
tom after 27 day: length=5.70,weight=9.40

*/
#include <iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
using namespace std;
bool isleap(int y)
{
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}
class CDate
{
public:
    CDate() {};
    CDate(int y, int m, int d) :year(y), month(m), day(d) {};
    operator double()
    {
        double mm[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
        double sum = 0;
        for (int i = 1; i < year; i++)
        {
            if (isleap(i)) sum = sum + 366;
            else sum = sum + 365;
        }
        for (int j = 1; j < month; j++)
        {
            if (isleap(year) && j == 2) sum = sum + mm[j] + 1;
            else if (!isleap(year) && j == 2) sum = sum + mm[j];
            else sum = sum + mm[j];
        }
        return sum + day;
    }
private:
    int year;
    int month;
    int day;
};
class Pet
{
protected:
    string name;//����
    float length;//��
    float weight;//����
    CDate current;//��ʼ��¼ʱ��
public:
    virtual void display(CDate day) = 0;//���Ŀ������ʱ�������������
    Pet(string n, float l, float w, int a, int b, int c) :name(n), length(l), weight(w), current(a, b, c) {};
};
class Cat :public Pet
{
public:
    friend CDate;
    Cat(string n, float l, float w, int a, int b, int c) :Pet(n, l, w, a, b, c) {};
    void display(CDate day)
    {
        if (day - current < 0) {
            cout << "error" << endl;
            return;
        }
        else
        {
            cout << name << " after " << int(day - current);cout<< fixed << setprecision(2) << " day: length=" << length + 0.1 * (day - current)
                << ",weight=" << weight + 0.2 * (day - current) << endl;
        }
    }
};
class Dog :public Pet
{
public:
    friend CDate;
    Dog(string n, float l, float w, int a, int b, int c) :Pet(n, l, w, a, b, c) {};
    void display(CDate day)
    {
        if (day - current < 0) {
            cout << "error" << endl;
            return;
        }
        else
        {
            cout << name << " after " << int(day - current);cout<< fixed << setprecision(2) << " day: length=" << length + 0.2 * (day - current)
                << ",weight=" << weight + 0.1 * (day - current) << endl;
        }
    }
};
int main()
{
    Pet* p;
    int t; 
    cin >> t;
    int a, b, c;
    cin >> a >> b >> c;
    while (t--)
    {
        int s;
        cin >> s;
        string name;
        float l, w;
        int d, e, f;
        cin >> name >> l >> w >> d >> e >> f;
        if (s == 1)
        {
            Cat text1(name, l, w, a, b, c);
            CDate current(d, e, f);
            p = &text1;
            p->display(current);
        }
        else if (s == 2)
        {
            Dog text2(name, l, w, a, b, c);
            CDate current(d, e, f);
            p = &text2;
            p->display(current);
        }
    }
    return 0;
}
