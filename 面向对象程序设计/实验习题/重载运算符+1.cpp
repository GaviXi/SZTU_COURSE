/*人民币输出（输出运算符重载）
题目描述

定义一个人民币类，包括元、角、分三个非负整数属性，操作包括初始化和输出

初始化用构造函数实现，接收一个浮点数参数（精度为小数点后两位），并转化为元、角、分，例如输入1.23元，经过构造函数转为1元、2角、3分

重载输出运算符对人民币类进行输出，具体格式看示例

 

 


输入

第一行输入t表示有t个实例

第二行起，输入t个正浮点数，带两位小数，每个数值表示以元为单位的人民币金额

 


输出

每行输出把浮点数的人民币金额，转化为元角分的整数格式，具体看输出

 


样例查看模式
正常显示
查看格式
输入样例1<-复制
2
2.45
1.38

输出样例1
yuan=2 jiao=4 fen=5
yuan=1 jiao=3 fen=8

*/
#include <iostream>
#include<cmath>
using namespace std;
class rnb
{
public:
    rnb(double m) :money(m) {};
    friend ostream& operator<<(ostream& out, rnb& text);
private:
    double money;
};
ostream& operator<<(ostream& out, rnb& text)
{
    int yuan = floor(text.money);
    int jiao = floor((text.money - yuan) * 10);
    int fen = text.money * 100 - yuan * 100 - jiao * 10;
    cout << "yuan=" << yuan << " " << "jiao=" << jiao << " " << "fen="
        << fen;
    return out;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double text2;
        cin >> text2;
        rnb a(text2);
        cout << a << endl;
    }
}
