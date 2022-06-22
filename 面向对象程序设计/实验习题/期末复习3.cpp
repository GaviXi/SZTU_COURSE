/* 倚天屠龙记（函数模板）
题目描述

江湖中有一个传言，只要倚天剑和屠龙刀中暗藏的秘密拼到一起，就能得到天下无敌的内功秘笈。设计一个函数模板，完成拼凑的功能（将倚天剑的秘密连接到屠龙刀的后面），并将秘笈输出. 其中每个秘密由n个元素组成，类型为T。

 


输入

第一行输入t表示有t个测试实例

第二行先输入一个大写字母表示数据类型，I表示整数类型，D表示双精度数类型，C表示字符型；然后输入n表示数据个数。

第三行输入倚天剑的n个数据

第四行输入屠龙刀的n个数据

依次输入t个实例

 


输出

 

每行输出一个结果

 


样例查看模式
正常显示
查看格式
输入样例1<-复制
2
I 5
5 3 51 27 9
27 0 0 5 1
C 5
kitty
hello
输出样例1
2700515351279
hellokitty
*/
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
template<class T>
void knife(int num)
{
    T* p = new T[num];
    T* q = new T[num];
    for (int i = 0; i < num; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < num; i++)
    {
        cin >> *(q + i);
    }
    for (int i = 0; i < num; i++)
    {
        cout<<  *(q + i);
    }
    for (int i = 0; i < num; i++)
    {
        cout<< *(p + i);
    }
    cout << endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        int num;
        cin >> a>>num;
        if (a == 'I')
        {
            knife<int>(num);
        }
        else if (a == 'D')
        {
            knife<double>(num);
        }
        else if(a=='C')
        {
            knife<char>(num);
        }
    }
    return 0;
}
