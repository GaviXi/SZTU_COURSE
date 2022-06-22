/*元素查找（函数模板）
题目描述

编写一个在数组中进行查找的函数模板，其中数组为具有n个元素，类型为T，要查找的元素为key。



注意：必须使用模板函数

输入

第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数组类型，I表示整数类型，D表示双精度数类型，C表示字符型，S表示字符串型；然后输入n表示数组长度。

第三行输入n个数据

第四行输入key

依次输入t个实例


输出

每行输出一个结果，找到输出key是数组中的第几个元素（从1开始），找不到输出0


样例查看模式
正常显示
查看格式
输入样例1<-复制
4
I 5
5 3 51 27 9
27
D 3
-11.3 25.42 13.2
2.7
C 6
a b g e u q
a
S 4
sandy david eason cindy
cindy
输出样例1
4
0
1
4

*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
int  ff(t1*a,t1 key,int num)
{
    for (int i = 0; i < num; i++)
    {
        if (a[i] == key)
        {
            return i+1;
        }
    }
    return 0;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char judge;
        int num;
        cin >> judge;
        if (judge == 'I')
        {
            cin >> num;
            int* a = new int[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            int key;
            cin >> key;
            cout << ff(a, key,num) << endl;
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            char key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            string key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
        else if (judge == 'D')
        {
            cin >> num;
            double* a = new double[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            double key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
    }
}
