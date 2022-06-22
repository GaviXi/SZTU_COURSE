/* 宠物的生长（虚函数和多态）
题目描述

需要开发一个系统，对宠物的生长状态进行管理。给出下面的基类框架：

类宠物

{ 受保护：

　　string name;//姓名

float length;//身长

float weight;//体重

CDate current;//开始记录时间

（日期类CDate包含年、月、日三个私有数据，其他方法根据需要自拟。）

上市：

virtual void display(CDate day)=0;//输出目标日期时宠物的身长和体重

}

以Pet为基类，构建出Cat和Dog两个类:

Cat一天身长加0.1，体重加0.2。

Dog一天身长加0.2，体重加0.1。

生成上述类并编写主函数，要求主函数中有一个基类指针Pet *pt，用于测试子类数据。

主函数根据输入的信息，相应建立Cat类对象或Dog类对象，并给出测量日期时宠物的身长和体重。


输入

第一行为测试次数

第二行是开始记录日期

从第三行起，每个测试用例占一行，每行给出宠物的基本信息：宠物的类型（1为Cat，2为Dog）、名字、身长、体重、最后测量的日期。


输出

要求输出目标日期宠物姓名、身长和体重（结果要求保留小数点后2位）。若测量日期小于开始日期，输出”error”。


样例查看模式
正常显示
查看格式
输入样例1<-复制
3
2019 5 5
1 tony 10 10 2018 12 30
2 jerry 5 6 2019 5 10
1 tom 3 4 2019 6 1

输出样例1
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
    string name;//姓名
    float length;//身长
    float weight;//体重
    CDate current;//开始记录时间
public:
    virtual void display(CDate day) = 0;//输出目标日期时宠物的身长和体重
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
