/*日期比较（运算符重载之类型转换）
题目描述

定义一个日期类CDate，包含属性：年、月、日，都是整数。
构造函数含单个参数，参数是八位整数，默认值为0，实现整数转为日期类型，例如参数为20170612，转为year = 2017, month = 6, day = 12
实现转换运算符重载，把日期类型转为整数，例如2017年6月8日转为20170608。注意，如果月或日小于10，转化为整数时要补0
实现日期的输出函数print，具体格式看示范数据
 
主函数如下，不能修改，请实现上面的日期类
int main()
{
	int t, t1, t2;
	CDate c1, c2;
	cin >> t;
	while (t--)
	{
		cin >> t1 >> t2;
		c1 = t1;
		c2 = t2;
		((c1 > c2) ? c1 : c2).print(); //日期大的输出，在代码c1 > c2中，会自动把c1和c2转换为整数进行比较
	}
	return 0;
}
 
注意：本题目不需要也不要重载>运算符，只要实现转换运算符重载，能够把日期类型转为整数就可以了
 


输入

第一行输入t表示有t对日期

接着每两行输入两个日期

输入t对

 


输出

每行输出一对日期中，日期大的信息

 


样例查看模式 
正常显示
查看格式
输入样例1 <-复制
2
20170625
20160528
19981111
20021212

输出样例1
2017年06月25日
2002年12月12日

*/
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
class CDate
{
public:
	CDate(int num=0)
	{
		for (int i = 0; i < 2; i++)
		{
			day = day + (num % 10) * pow(10, i);
			num = num / 10;
		}
		for (int i = 0; i < 2; i++)
		{
			month = month + (num % 10) * pow(10, i);
			num = num / 10;
		}
		for (int i = 0; i < 4; i++)
		{
			year = year + (num % 10) * pow(10, i);
			num = num / 10;
		}
	}
	operator int()
	{
		int sum=year*10000;
		int m = month;
		int n = day;
		int temp = m % 10;
		sum = sum + temp * 100;
		temp = ((m / 10) % 10);
		sum = sum + temp * 1000;
		temp = n % 10;
		sum = sum + temp;
		temp = (n / 10) % 10;
		sum = sum + temp * 10;
		return sum;
	}
	void print()
	{
		cout << year << "年" << setw(2) << setfill('0') << month <<"月"<< setw(2) << setfill('0')<<day<<"日"<< endl;
	}
private:
	int year=0;
	int month=0;
	int day=0;
};
int main()
{
	int t, t1, t2;
	CDate c1, c2;
	cin >> t;
	while (t--)
	{
		cin >> t1 >> t2;
		c1 = t1;
		c2 = t2;
		((c1 > c2) ? c1 : c2).print(); //日期大的输出，在代码c1 > c2中，会自动把c1和c2转换为整数进行比较
	}
	return 0;
}
