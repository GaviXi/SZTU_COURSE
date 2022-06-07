/*�������(�������캯��)
��Ŀ����

�����Ϊһ�ֶ���Ҳ������������������������԰���������ơ�����(�ֱ���O��T��B��ʾԭ�桢���ð滹�Ǳ���)����Ч��������(��CDate���Ӷ����ʾ)�ʹ洢����(�ֱ���D��H��U��ʾ���̡����̺�U��)�ȡ����������ͨ���������캯����ʵ�֣���ʱ�ڿ������캯����������͸ĳɡ�B��, �洢���ʸ�Ϊ"H"���������䡣����ɸ���Ŀ������졢����ʹ�ӡ(������2015��4��7��������Ч�ڻ��ж����죬�Ƿ����)��Ա������ʵ�֡�

�����������Ч��ֹ������0��0��0�գ���ʾ���������ƣ�Ϊunlimited��������������2015��4��7��֮ǰ�����ǹ��ڣ���ʾΪexpired���������������2015��4��7��֮������ʾ֮���ʣ�����������������Ϣ�����������


��CDate���ʵ�֣�

class CDate

{

    private:

        int year, month, day;

    public:

        CDate(int y, int m, int d);

        bool isLeapYear();

        int getYear();

        int getMonth();

        int getDay();

        int getDayofYear();

};

 

CDate::CDate(int y, int m, int d)

{ 

    year = y, month = m,day = d;

}

 

bool CDate::isLeapYear()

{ 

    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0; 

}

 

int CDate::getYear()

{ 

    return year;

}

 

int CDate::getMonth() 

{ 

    return month;

}

 

int CDate::getDay() 

{ 

    return day;

}

 

int CDate::getDayofYear()

{

    int i, sum = day;

    int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (isLeapYear())

    {

        a[2]++;

    }

    // �����ڵ�����

    for (i = 0; i < month; i++)

    {

        sum += a[i];

    }

    return sum;

}

 


����

�������ݵ����� t

��һ���������

��һ���������  ��һ�������������  ��һ�������Ч���� �� ��

�ڶ����������

�ڶ���������� �ڶ�������������� �ڶ��������Ч���� �� ��

......

ע�⣺���������󳤶�Ϊ30��


���

name: ��һ���������

type: ��һ���������

media: ��һ�������������

��һ�����2015-4-7�����Ч����

 

name: ��һ���������

type: backup

media: hard disk

��һ�����2015-4-7�����Ч����

......


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
Photoshop_CS5
O D 0 0 0
Audition_3.0
B U 2015 2 3
Visual_Studio_2010
T H 2015 5 5
�������1
name:Photoshop_CS5
type:original
media:optical disk
this software has unlimited use

name:Photoshop_CS5
type:backup
media:hard disk
this software has unlimited use

name:Audition_3.0
type:backup
media:USB disk
this software has expired

name:Audition_3.0
type:backup
media:hard disk
this software has expired

name:Visual_Studio_2010
type:trial
media:hard disk
this software is going to be expired in 28 days

name:Visual_Studio_2010
type:backup
media:hard disk
this software is going to be expired in 28 days
*/
#include<iostream>
#include<string.h>
using namespace std;
class CDate
{
private:
    int year, month, day;
public:
    CDate(int y, int m, int d);
    bool isLeapYear();
    int getYear();
    int getMonth();
    int getDay();
    int getDayofYear();
};
class Software
{
private:
    char name[50];
    char kind;
    CDate time;
    char objects;
public:
    Software(char f[], char a, char b, int c, int d, int e) :kind(a), time(c, d, e), objects(b)
    {
        strcpy(name, f);
    }
    Software(Software& A):time(A.time.getYear(), A.time.getMonth(), A.time.getDay())
    {
        strcpy(name, A.name);
        kind = 'B';
        objects = 'H';
    }
    void print()
    {
        cout <<"name:"<< name << endl;
        if (kind == 'O')cout << "type:" << "original" << endl;
        else if(kind=='T')cout << "type:" << "trial" << endl;
        else if(kind=='B')cout << "type:" << "backup" << endl;
        if (objects == 'D') cout << "media:optical disk" << endl;
        else if(objects=='H') cout << "media:hard disk" << endl;
        else if(objects=='U') cout << "media:USB disk" << endl;
        if (time.getYear() == 0 && time.getMonth() == 0 && time.getDay() == 0)
            cout << "this software has unlimited use";
        else if (time.getDayofYear()-97>0)
        {
            cout << "this software is going to be expired in " << time.getDayofYear() - 97 << " days" ;
        }
        else
        {
            cout << "this software has expired" ;
        }
    }
};
CDate::CDate(int y, int m, int d)
{
    year = y, month = m, day = d;
}
bool CDate::isLeapYear()
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}
int CDate::getYear()
{
    return year;
}
int CDate::getMonth()
{
    return month;
}
int CDate::getDay()
{
    return day;
}
int CDate::getDayofYear()
{
    int i, sum = day;
    int a[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    if (isLeapYear())
    {
        a[2]++;
    }
    // �����ڵ�����
    for (i = 0; i < month; i++)
    {
        sum += a[i];
    }
    return sum;
}

int main(void)
{
    int t;
    cin >> t;
    t = t - 1;
    while (t--)
    {
        char e[30];
        char kind;
        char objects;
        int a, b, c;
        cin >> e >> kind >> objects >> a >> b >> c;
        Software sorfware1(e, kind, objects, a, b, c);
        sorfware1.print();
        cout << endl<<endl;
        Software sorfware2(sorfware1);
        sorfware2.print();
        cout << endl<<endl;
    }
    char e[30];
    char kind;
    char objects;
    int a, b, c;
    cin >> e >> kind >> objects >> a >> b >> c;
    Software sorfware1(e, kind, objects, a, b, c);
    sorfware1.print();
    cout <<endl<< endl;
    Software sorfware2(sorfware1);
    sorfware2.print();
    return 0;
}
