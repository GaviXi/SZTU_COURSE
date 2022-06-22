/*谁的票数最高（函数模板）
题目描述

某小镇要票选镇长，得票最高者当选。但由于投票机制不健全，导致每届投票时，候选人在投票系统的识别码类型不一致。请编写函数模板，能针对多种类型的数据，查找出得票最高的元素。其中，每届投票的选票有n张，识别码类型为T

注意：必须使用模板函数



 


输入

第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示识别码类型，I表示整数类型，C表示字符型，S表示字符串型；然后输入n表示数组长度。

第三行输入n个数据

依次输入t个实例


输出

每行输出一个结果，分别输出当选者的识别码和得票数，以空格分开。


样例查看模式
正常显示
查看格式
输入样例1<-复制
3
I 10
5 3 5 2 9 7 3 7 2 3
C 8
a b a e b e e q
S 5
sandy david eason cindy cindy

输出样例1
3 3
e 3
cindy 2
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
void  ff(t1*a,int num)
{
    t1* p = new t1[num];
    int* q = new int[num] {0};
    int j = 1;
    int flag;
    p[0] = a[0];
    for (int i = 1; i < num; i++)
    {
        flag = 0;
        for (int k = 0; k < j; k++)
        {
            if (p[k] == a[i])
            {
                q[k]++;
                flag = 1;
                break;
            };
        }
        if (flag == 0)
        {
            p[j] = a[i];
            j++;
        }
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < j; i++)
    {
        if (q[i] > max)
        {
            max = q[i];
            index = i;
        }
    }
    cout << p[index] << " " << max+1 << endl;
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
            ff(a, num);
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            ff(a, num);
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            ff(a, num);
        }
    }
}
