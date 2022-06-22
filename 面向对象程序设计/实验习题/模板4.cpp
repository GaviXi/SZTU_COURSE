/*简单类模板(类模板)
题目描述

定义一个列表类，该列表包含属性：数值列表（用长度为100的数组表示），数据长度（实际的数据个数）；包含的方法：初始化、插入、删除、打印，方法定义为：

1）初始化，接受外来参数，把数据保存在数值列表中，未使用的列表部分全部初始化为-1

2）插入，接受外来参数的插入位置和插入数值，插入位置从0开始计算，注意从插入位置开始，原有数据都要往后移动一位，且数据长度+1

3）删除，接受外来参数的删除位置，删除位置从0开始计算，注意从删除位置后一位开始，原有数据都要往前移动一位，且数据长度-1

4）打印，把包含的数据按位置顺序输出一行，数据之间单个空格隔开

使用类模板的方法，使得这个类支持整数int类型和浮点数double类型


输入

第一行先输入参数n表示有n个数据，接着输入n个整数

第二行输入两个参数，表示插入位置和插入数值，数值为整数

第三行输入删除位置

第四行先输入参数n表示有n个数据，接着输入n个浮点数

第五行输入两个参数，表示插入位置和插入数值，数值为浮点数

第六行输入删除位置

 


输出

针对头三行输入，分别执行初始化、插入操作和删除操作，调用打印方法输出列表包含的整数数据

针对接着的三行输入，分别执行初始化、插入操作和删除操作，调用打印方法输出列表包含的浮点数数据


样例查看模式
正常显示
查看格式
输入样例1<-复制
5 11 22 33 44 55
2 888
4
5 1.1 2.2 3.3 4.4 5.5
2 88.8
3

输出样例1
11 22 888 33 55
1.1 2.2 88.8 4.4 5.5

*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
class list
{
private:
    t1* p=new t1[100];
    int l;
public:
    list(int num)
    {
        l = num;
        for (int i = 0; i < l; i++) p[i] = -1;
        for (int i = 0; i < num; i++)
        {
            cin >> p[i];
        }
    }
    void insert(int index,t1 v)
    {
        int k = index;
        for (int i = l; i > k; i--)
        {
            p[i] = p[i - 1];
        }
        p[k] = v;
        l++;
    }
    void del(int index)
    {
        for (int i = index; i < l; i++)
        {
            p[i] = p[i + 1];
        }
        p[l - 1] = -1;
        l--;
    }
    void print()
    {
        for (int i = 0; i < l - 1; i++)
        {
            cout << p[i] << " ";
        }
        cout << p[l - 1] << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    list<int> a(n);
    int index, value;
    cin >> index >> value;
    a.insert(index, value);
    cin >> index;
    a.del(index);
    a.print();
    cin >> n;
    list<double> b(n);
    double  value2;
    cin >> index >> value2;
    b.insert(index, value2);
    cin >> index;
    b.del(index);
    b.print();
}
