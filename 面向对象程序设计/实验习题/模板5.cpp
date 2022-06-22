/*矩阵类模板（类模板）
题目描述

设计一个矩阵类模板Matrix，支持任意数据类型的数据。

要求至少包含2个成员函数：矩阵转置函数transport、以及打印输出函数print

编写main函数进行测试，调用类的成员函数完成转置和输出。


输入

第一行先输入t，表示有t个测试用例

从第二行开始输入每个测试用例的数据。

首先输入数据类型，I表示int，D表示double，C表示char，接着输入两个参数m和n，分别表示矩阵的行和列

接下来输入矩阵的元素，一共m行，每行n个数据

 

 


输出

输出转置后的矩阵


样例查看模式
正常显示
查看格式
输入样例1<-复制
2
I 2 3
1 2 3
4 5 6
C 3 3
a b c
d e f
g h i
输出样例1
1 4
2 5
3 6
a d g
b e h
c f i
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
class Matrix
{
private:
    int h;
    int l;
    t1** p;
public:
    Matrix(int h, int l)
    {
        this->h = h;
        this->l = l;
        p = new t1*[h];
        for (int i = 0; i < h; i++)
        {
            *(p + i) = new t1[l];
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l; j++)
            {
                cin >> p[i][j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l-1; j++)
            {
                cout<< p[i][j]<<" ";
            }
            cout << p[i][l-1] << endl;
        }
    }
    void transport()
    {
        t1** q = new t1*[l];
        for (int i = 0; i < l; i++)
        {
            *(q + i) = new t1[h];
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l ; j++)
            {
                q[j][i]=p[i][j] ;
            }
        }
        delete[]p;
        p = q;
        int a = h;
        int b = l;
        h = b;
        l = a;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char judge;
        cin >> judge;
        int h, l;
        if (judge == 'I')
        {
            cin >> h >> l;
            Matrix<int> a(h,l);
            a.transport();
            a.print();
        }
        else if (judge == 'D')
        {
            cin >> h >> l;
            Matrix<double> a(h, l);
            a.transport();
            a.print();
        }
        else if (judge == 'C')
        {
            cin >> h >> l;
            Matrix<char> a(h, l);
            a.transport();
            a.print();
        }
    }
}
