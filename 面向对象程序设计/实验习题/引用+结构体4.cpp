/*˭���϶����ṹ�壩
��Ŀ����

����һ���ṹ�壬���������գ���ʾһ��ѧ���ĳ������ڡ�Ȼ����һȺѧ���ĳ����������ҳ�˭�ĳ����������еڶ�

Ҫ�󣺳������ڵĴ洢����ʹ�ýṹ�壬����ʹ���������͵����ݽṹ��

Ҫ�����ȫ���̶Գ������ڵ����롢���ʡ����������ʹ�ýṹ��

 


����

��һ������t��ʾ��t����������

ÿ�����������������ֱ��ʾ�ꡢ�¡���

��������t��ʵ��

 


���

������еڶ��ϵĳ������ڣ�������-��-�յĸ�ʽ���

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
6
1980 5 6
1981 8 3
1980 3 19
1980 5 3
1983 9 12
1981 11 23

�������1
1980-5-3

��������2 <-����
5
1980 5 6
1981 8 3
1980 5 3
1983 9 12
1981 11 23
�������2
1980-5-6
��������3 <-����
4
2000 11 28
2021 10 30
2022 8 29
2022 5 1
�������3
2021-10-30
*/
#include<iostream>
using namespace std;

struct student
{
 int year;
 int month;
 int day;
};


int main(void)
{
 int i, t, k;
 cin >> t;
 student* sztu = new student[t];
 for (i = 0; i < t; i++)
 {
  cin >> (sztu+i)->year >> (sztu + i)->month >> (sztu + i)->day;
 }
 int newindex = 0;
 int next; 
 int temp = (sztu->year) * 12 * 30 + (sztu->month) * 30 + (sztu->day);
 for (i = 0; i < t; i++)
 {
  next = ((sztu+i)->year) * 12 * 30 + ((sztu + i)->month) * 30 + ((sztu + i)->day);
  if (next < temp)
  {
   newindex = i;
   temp = ((sztu + i)->year) * 12 * 30 + ((sztu + i)->month) * 30 + ((sztu + i)->day);
  }
 }
 int j;
 int oldindex;
 for (j = 0; j < t; j++)
 {
  if (j != newindex)
  {
   temp = ((sztu + j)->year) * 12 * 30 + ((sztu + j)->month) * 30 + ((sztu + j)->day);
   oldindex = j;
   break;
  }
 }
 for (k = 0; k < t; k++)
 {
  if (k != newindex)
  {
   int next = ((sztu + k)->year) * 12 * 30+ ((sztu + k)->month) * 30+ ((sztu + k)->day);
   if (next < temp)
   {
    oldindex = k;
    temp = ((sztu + k)->year) * 12 * 30 + ((sztu + k)->month) * 30+ ((sztu + k)->day);
   }
  }
 }
 cout << sztu[oldindex].year << "-" << sztu[oldindex].month << "-" << sztu[oldindex].day << endl;
 return 0;
}
