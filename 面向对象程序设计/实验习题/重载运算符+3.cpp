/* �Ľ��Ƽӷ�����������أ�
��Ŀ����

����һ���Ľ��Ƶ��࣬�ض��塰+����ʵ���Ľ��������ۼӡ�


����

��һ����������Ҫ���Ľ������ĸ���
�ڶ��п�ʼ�����������Ľ�����

���

���������Ľ������ۼӵĺ�


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
3
13
2
21
�������1
102
*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class sjz
{
public:
    sjz() {};
    sjz(int n) :number(n){};
    sjz(const sjz& a)
    {
        number = a.number;
    }
    friend ostream& operator<<(ostream& out, sjz& text);
    friend sjz operator+(sjz& a,const sjz& b);
private:
    int number;
};
ostream& operator<<(ostream& out, sjz& text)
{
    cout << text.number;
    return out;
}
sjz operator+(sjz& a,const sjz& b)
{
    int l1 = 0;
    int l2 = 0;
    int anum = a.number;
    int bnum = b.number;
    int sum = anum + bnum;
    int c = sum;
    int n = 0, _sum = 0;
    while (c % 10 != 0)
    {
        c = c / 10;
        n++;
    }
    for (int i = 0; i < n + 1; i++)
    {
        if (sum % 10 >= 4)
        {
            sum = (sum / 10 + 1) * 10 + sum % 10 - 4;
        }
        _sum = _sum + (sum % 10) * pow(10, i);
        sum = sum / 10;
    }
    return sjz(_sum);

}
int main()
{
    int t;
    cin >> t;
    int n;
    cin >> n;
    sjz text(n);
    t--;
    while (t--)
    {
        int x;
        cin >> x;
        text = text + sjz(x);
    }
    cout << text;
}
