/*�����飨����+��Ԫ+���ã�
��Ŀ����

����CBook�����԰���������string�������ߣ�string�����ۼۣ�double��,�����磨string���������У��������롢�����

������Ԫ����find(CBook *book, int n, int &max1index,int &max2index)����n�������ۼ���ߡ��θߵ������飬��ͨ�����÷������±ꡣ������ͬ�ۼ���ߡ��θߵ������飬������˳�������һ�����ڶ�����

����n������n�������Ϣ������������Ԫ��������۸���ߵ��������±꣬����������ʽ�������Ϣ��


����

���Դ���

ÿ��������ݸ�ʽ���£�

n

n������Ϣ(����,����,�ۼ�,������)


���

ÿ���������������У�

��һ�У��ۼ���ߵ�����Ϣ��

�ڶ��У��ۼ۴θߵ�����Ϣ��

���������ʽ���������ۼ۱�����λС�������м��Ի��зָ���

ÿ���������֮����1�����С�


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
1
5
python�����ŵ���ͨ �����.��ɪ˹ 62.00 �����ʵ������
Java�������ʵս �Ǵ� 54.5 ��е��ҵ������
Effective-Java���İ� Լ����.����� 94 ��е��ҵ������
�ع�-���Ƽ��д������� ��.���� 122.6 �����ʵ������
��������:����ҵ������ݷ���ʵս ���� 61.4 ���ӹ�ҵ������
�������1
�ع�-���Ƽ��д�������
��.����
122.60
�����ʵ������

Effective-Java���İ�
Լ����.�����
94.00
��е��ҵ������

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
