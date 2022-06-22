/* 货币加减（运算符重载）
题目描述

定义CMoney类，包含元、角、分三个数据成员，友元函数重载‘+’、'-'，实现货币的加减运算（假设a-b中a的金额始终大于等于b的金额），

重载输入及输出，实现货币的输入，输出。

读入最初的货币值，对其不断进行加、减操作，输出结果。

可根据需要，为CMoney类添加构造函数或其它成员函数。

 

 


输入

测试次数

每组测试数据格式如下：

第一行，初始货币：元 角 分

第二行开始，每行一个操作：add 元 角 分（加）、minus 元 角 分（减）、stop（结束）

 


输出

 对每组测试数据，输出操作终止后的货币金额，具体输出格式见样例。


样例查看模式
正常显示
查看格式
输入样例1<-复制
2
0 0 0
add 48 9 0
minus 0 5 3
add 18 6 8
add 12 1 2
stop
10 2 5
add 5 8 0
add 32 1 2
minus 10 5 9
minus 37 5 8
stop



输出样例1
79元1角7分
0元0角0分

提示

<<和>>都需要重载*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class CMoney
{
public:
    CMoney() {};
    CMoney(int y,int j,int f) :yuan(y),jiao(j),fen(f){};
    friend ostream& operator<<(ostream& out, CMoney& text);
    friend istream& operator>>(istream& out, CMoney& text);
    friend CMoney& operator+(CMoney& a,const CMoney& b);
    friend CMoney& operator-(CMoney& a,const CMoney& b);
private:
    int yuan;
    int jiao;
    int fen;
};
ostream& operator<<(ostream& out, CMoney& text)
{
    cout << text.yuan << "元" <<text.jiao << "角"<< text.fen<<"分";
    return out;
}
istream& operator>>(istream& out, CMoney& text)
{
    cin >> text.yuan >> text.jiao >> text.fen;
    return out;
}
CMoney& operator+(CMoney& a,const CMoney& b)
{
    int left;
    a.fen = a.fen + b.fen;
    left = a.fen / 10;
    a.fen = a.fen % 10;
    a.jiao = a.jiao + b.jiao + left;
    left = a.jiao / 10;
    a.jiao = a.jiao % 10;
    a.yuan = a.yuan + b.yuan + left;
    return a;   
}
CMoney& operator-(CMoney& a,const CMoney& b)
{
    if (a.fen < b.fen)
    {
        a.jiao--;
        a.fen = a.fen + 10 - b.fen;
    }
    else
    {
        a.fen = a.fen - b.fen;
    }
    if (a.jiao < b.jiao)
    {
        a.yuan--;
        a.jiao = a.jiao + 10 - b.jiao;
    }
    else
    {
        a.jiao = a.jiao - b.jiao;
    }
    a.yuan = a.yuan - b.yuan;
    return a;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        CMoney text;
        cin >> text;
        string g;
        cin >> g;
        while (g != "stop")
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (g == "add")
            {
                text = text + CMoney(a, b, c);
            }
            else if (g == "minus")
            {
                text = text - CMoney(a, b, c);
            }
            cin >> g;
        }
        cout << text << endl;
    }
}
