/*数据排序（函数模板）
题目描述

编写一个进行升序排序的函数模板，其中数组为具有n个元素，类型为T。

注意：必须使用模板函数


输入

第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数组类型，I表示整数类型，C表示字符型，S表示字符串型，D表示双精度数类型；然后输入n表示数组长度。

第三行输入n个数据

依次输入t个实例


输出

每行输出一个结果


样例查看模式
正常显示
查看格式
输入样例1<-复制
4
I 10
15 3 51 27 9 35 78 14 65 8
D 3
-11.3 25.42 13.2
C 6
a b g e u q
S 4
sandy david eason cindy
输出样例1
3 8 9 14 15 27 35 51 65 78 
-11.3 13.2 25.42 
a b e g q u 
cindy david eason sandy 
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
void line(t1*a,int num)
{
    sort(a, a + num);
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
            int *a=new int [num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'D')
        {
            cin >> num;
            double* a = new double[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] <<" " << endl;
        }
    }
}
