/*最贵的书（重载+友元+引用）
题目描述

定义CBook，属性包含书名（string），编者（string）、售价（double）,出版社（string）。方法有：重载输入、输出。

定义友元函数find(CBook *book, int n, int &max1index,int &max2index)查找n本书中售价最高、次高的两本书，并通过引用返回其下标。若有相同售价最高、次高的两本书，按输入顺序输出第一本、第二本。

输入n，输入n本书的信息，调用上述友元函数，求价格最高的两本书下标，并按样例格式输出书信息。


输入

测试次数

每组测试数据格式如下：

n

n行书信息(书名,编者,售价,出版社)


输出

每组测试数据输出两行：

第一行：售价最高的书信息。

第二行：售价次高的书信息。

具体输出格式见样例，售价保留两位小数。书中间以换行分隔。

每组输出用例之间留1个空行。


样例查看模式
正常显示
查看格式
输入样例1<-复制
1
5
python从入门到精通 艾里克.马瑟斯 62.00 人民邮电出版社
Java并发编程实战 盖茨 54.5 机械工业出版社
Effective-Java中文版 约书亚.布洛克 94 机械工业出版社
重构-改善既有代码的设计 马丁.福勒 122.6 人民邮电出版社
活用数据:驱动业务的数据分析实战 陈哲 61.4 电子工业出版社
输出样例1
重构-改善既有代码的设计
马丁.福勒
122.60
人民邮电出版社

Effective-Java中文版
约书亚.布洛克
94.00
机械工业出版社

*/
#include <iostream>
#include<cmath>
#include<iomanip>
#include<cstring>
#include<algorithm>
using namespace std;
class CBook
{
private:
    string book;
    string writor;
    double price;
    string press;
public:
    CBook() {};
    CBook(string b, string w, double p, string r) :book(b), writor(w), price(p), press(r) {};
    void set(string b, string w, double p, string r)
    {
        book = b;
        writor = w;
        price = p;
        press = r;
    }
    friend ostream& operator<<(ostream& out, CBook& a);
    friend istream& operator>>(istream& out, CBook& a);
    friend void find(CBook* book, int n, int& max1index, int& max2index);
};
ostream& operator<<(ostream& out, CBook& a)
{
    cout << a.book << endl;
    cout << a.writor << endl;
    cout <<fixed<<setprecision(2)<< a.price << endl;
    cout << a.press << endl;
    return out;
}
istream& operator>>(istream& out, CBook& a)
{
    cin >> a.book >> a.writor >> a.price >> a.press;
    return out;
}
void find(CBook* book, int n, int& max1index, int& max2index)
{
    double max = 0;
    for (int i = 0; i < n; i++)
    {
        if (book[i].price > max)
        {
            max = book[i].price;
            max1index = i;
        }
    }
    max = 0;
    for (int i = 0; i < n; i++)
    {
        if (book[i].price > max&&i!=max1index)
        {
            max = book[i].price;
            max2index = i;
        }
    }
}
int main()
{
    int t;
    int m1, m2;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        CBook* p = new CBook[n];
        for (int i = 0; i < n; i++)
        {
            string name, writor, press;
            double price;
            cin >> name >> writor >> price >> press;
            (p + i)->set(name, writor, price, press);
        }
        find(p, n,m1, m2);
        cout << *(p + m1) << endl;
        cout << *(p + m2)<<endl;
    }
}
