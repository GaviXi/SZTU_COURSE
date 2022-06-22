/*X的放大与缩小（运算符重载）
题目描述

X字母可以放大和缩小，变为n行X（n=1,3,5,7,9,...,21）。例如，3行x图案如下：



现假设一个n行（n>0，奇数）X图案，遥控器可以控制X图案的放大与缩小。遥控器有5个按键，1）show，显示当前X图案；2）show++, 显示当前X图案，再放大图案，n+2；3）++show，先放大图案，n+2，再显示图案；4）show--，显示当前X图案，再缩小图案，n-2；5）--show，先缩小图案，n-2，再显示图案。假设X图案的放大和缩小在1-21之间。n=1时，缩小不起作用，n=21时，放大不起作用。

用类CXGraph表示X图案及其放大、缩小、显示。主函数模拟遥控器，代码如下，不可修改。请补充CXGraph类的定义和实现。

int main()
{
    int t, n;
    string command;
    cin >> n;
    CXGraph xGraph(n);
    cin >> t;
    while (t--)
    {
        cin >> command;
        if (command == "show++")
        {
            cout << xGraph++ << endl;
        }
        else if(command == "++show")
        {
            cout << ++xGraph << endl;
        }
        else if (command == "show--")
        {
            cout << xGraph-- << endl;
        }
        else if (command == "--show")
        {
            cout << --xGraph << endl;
        }
        else if (command == "show")
        {
            cout << xGraph << endl;
        }
    }
    return 0;
}
 

 


输入

 第一行n，大于0的奇数，X图案的初始大小。

第二行，操作次数

每个操作一行，为show、show++、show--、--show、++show之一，具体操作含义见题目。


输出

 对每个操作，输出对应的X图案。


样例查看模式
正常显示
查看格式
输入样例1<-复制
3
5
show
show++
show++
++show
--show

输出样例1
XXX
 X
XXX

XXX
 X
XXX

XXXXX
 XXX
  X
 XXX
XXXXX

XXXXXXXXX
 XXXXXXX
  XXXXX
   XXX
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX

XXXXXXX
 XXXXX
  XXX
   X
  XXX
 XXXXX
XXXXXXX


*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class CXGraph
{
private:
    int n;
public:
    CXGraph(int num) :n(num) {};
    friend ostream& operator<<(ostream& out,const CXGraph& a);
    CXGraph operator++(int)
    {
        if (n == 21) return CXGraph(*this);
        CXGraph a(n);
        n = n + 2;
        return a;
    }
    CXGraph& operator++()
    {
        if (n == 21) return (*this);
        n = n + 2;
        return *this;
    }
    CXGraph operator--(int)
    {
        if (n == 1) return CXGraph(1);
        CXGraph a(n);
        n = n - 2;
        return a;
    }
    CXGraph& operator--()
    {
        if (n == 1) return *this;
        n = n - 2;
        return *this;
    }
};
ostream& operator<<(ostream& out, const CXGraph& a)
{
    int num = a.n;
    int temp1 = a.n / 2;
    int temp2 = temp1 + 1;
    int temp3 = temp1 - 1;
    int i = 0, j = 1;
    while (temp2!=0)
    {
        for (int k = 0; k < i; k++) cout << " ";
        for (int k = 0; k < temp2 * 2 - 1; k++) cout << "X";
        cout << endl;
        i++;
        temp2--;
    }
    while (temp3!=-1)
    {
        for (int k = 0; k < temp3; k++) cout << " ";
        for (int k = 0; k < (j+1) * 2 - 1; k++) cout << "X";
        cout << endl;
        j++;
        temp3--;
    }
    return out;
}
int main()
{
    int t, n;
    string command;
    cin >> n;
    CXGraph xGraph(n);
    cin >> t;
    while (t--)
    {
        cin >> command;
        if (command == "show++")
        {
            cout << xGraph++ << endl;
        }
        else if (command == "++show")
        {
            cout << ++xGraph << endl;
        }
        else if (command == "show--")
        {
            cout << xGraph-- << endl;
        }
        else if (command == "--show")
        {
            cout << --xGraph << endl;
        }
        else if (command == "show")
        {
            cout << xGraph << endl;
        }
    }
    return 0;
}
