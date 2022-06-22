/*字符串比较（运算符重载）
题目描述

定义一个字符串类str，用来存放不定长的字符串，重载运算符"= ="、"<"、">",用于两个字符窜的等于、小于和大于的比较运算。

class Str
{
private:
    char* p;
public:
    Str();
    Str(char* s);
    friend bool operator >(Str&, Str&);
    friend bool operator <(Str&, Str&);
    friend bool operator ==(Str&, Str&);
    void show()
    {
        cout << p;
    }
};
要求如下：
1.实现str类；
2.编写main函数，初始化三个str对象A、B、C，然后用这三个对象去测试重载的运算符。如果A>B,则输出A的字符串；否则输出B的字符串。如果A<C，则输出A的字符串；否则输出C的字符串。如果B==C，则输出B的字符串；否则输出C的字符串。
3.字符串比较方式为依次将对应位置字符的ASCII码进行比较。
 
 


输入

输入3行，每行为一个字符串，初始化三个str对象。

 


输出

输出比较之后的结果字符串，每个比较的结果一行。

 


样例查看模式
正常显示
查看格式
输入样例1<-复制
i am a student
i love China
i love China
输出样例1
i love China
i am a student
i love China
提示

 由于输入字符串中有空格，用 getline进行输入，如下所示

字符 a[50];

cin.getline(a, 50);*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class Str
{
private:
    char* p;
public:
    Str() {};
    Str(char* s)
    {
        p = new char[strlen(s)];
        strcpy(p, s);
    }
    friend bool operator >(Str&, Str&);
    friend bool operator <(Str&, Str&);
    friend bool operator ==(Str&, Str&);
    void show()
    {
        cout << p;
    }
};
bool operator >(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) >0)
    {
        return true;
    }
    else return false;
}
bool operator <(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) <0)
    {
        return true;
    }
    else return false;
}
bool operator ==(Str& a, Str& b)
{
    if (strcmp(a.p, b.p) == 0)
    {
        return true;
    }
    else return false;
}
int main()
{
    char q[1000];
    char p[1000];
    char s[1000];
    cin.getline(q, sizeof(q));
    cin.getline(p, sizeof(p));
    cin.getline(s, sizeof(s));
    Str A(q);
    Str B(p);
    Str C(s);
    if (A > B)
    {
        A.show();
    }
    else B.show();
    cout << endl;
    if (A < C)
    {
        A.show();
    }
    else C.show();
    cout << endl;
    if (B == C)
    {
        B.show();
    }
    else C.show();
}
