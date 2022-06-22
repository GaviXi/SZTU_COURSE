/* 四进制加法（运算符重载）
题目描述

定义一个四进制的类，重定义“+”号实现四进制数的累加。


输入

第一行输入所需要的四进制数的个数
第二行开始，依次输入四进制数

输出

所有输入四进制数累加的和


样例查看模式
正常显示
查看格式
输入样例1<-复制
3
13
2
21
输出样例1
102
*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class sjz
{
public:
    sjz() {};
    sjz(int n) :number(n){};
    sjz(const sjz& a)
    {
        number = a.number;
    }
    friend ostream& operator<<(ostream& out, sjz& text);
    friend sjz operator+(sjz& a,const sjz& b);
private:
    int number;
};
ostream& operator<<(ostream& out, sjz& text)
{
    cout << text.number;
    return out;
}
sjz operator+(sjz& a,const sjz& b)
{
    int l1 = 0;
    int l2 = 0;
    int anum = a.number;
    int bnum = b.number;
    int sum = anum + bnum;
    int c = sum;
    int n = 0, _sum = 0;
    while (c % 10 != 0)
    {
        c = c / 10;
        n++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (sum % 10 >= 4)
        {
            sum = (sum / 10 + 1) * 10 + sum % 10 - 4;
        }
        _sum = _sum + (sum % 10) * pow(10, i);
        sum = sum / 10;
    }
    return sjz(_sum);

}
int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;
    sjz text(n);
    t--;
    while (t--)
    {
        int x;
        cin >> x;
        text = text + sjz(x);
    }
    cout << text;
}
