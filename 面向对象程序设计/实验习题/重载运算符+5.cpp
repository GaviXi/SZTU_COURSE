/*X�ķŴ�����С����������أ�
��Ŀ����

X��ĸ���ԷŴ����С����Ϊn��X��n=1,3,5,7,9,...,21�������磬3��xͼ�����£�



�ּ���һ��n�У�n>0��������Xͼ����ң�������Կ���Xͼ���ķŴ�����С��ң������5��������1��show����ʾ��ǰXͼ����2��show++, ��ʾ��ǰXͼ�����ٷŴ�ͼ����n+2��3��++show���ȷŴ�ͼ����n+2������ʾͼ����4��show--����ʾ��ǰXͼ��������Сͼ����n-2��5��--show������Сͼ����n-2������ʾͼ��������Xͼ���ķŴ����С��1-21֮�䡣n=1ʱ����С�������ã�n=21ʱ���Ŵ������á�

����CXGraph��ʾXͼ������Ŵ���С����ʾ��������ģ��ң�������������£������޸ġ��벹��CXGraph��Ķ����ʵ�֡�

int main()
{
    int t, n;
    string command;
    cin >> n;
    CXGraph xGraph(n);
    cin >> t;
    while (t--)
    {
        cin >> command;
        if (command == "show++")
        {
            cout << xGraph++ << endl;
        }
        else if(command == "++show")
        {
            cout << ++xGraph << endl;
        }
        else if (command == "show--")
        {
            cout << xGraph-- << endl;
        }
        else if (command == "--show")
        {
            cout << --xGraph << endl;
        }
        else if (command == "show")
        {
            cout << xGraph << endl;
        }
    }
    return 0;
}
 

 


����

 ��һ��n������0��������Xͼ���ĳ�ʼ��С��

�ڶ��У���������

ÿ������һ�У�Ϊshow��show++��show--��--show��++show֮һ����������������Ŀ��


���

 ��ÿ�������������Ӧ��Xͼ����


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
3
5
show
show++
show++
++show
--show

�������1
XXX
 X
XXX

XXX
 X
XXX

XXXXX
 XXX
  X
 XXX
XXXXX

XXXXXXXXX
 XXXXXXX
  XXXXX
   XXX
    X
   XXX
  XXXXX
 XXXXXXX
XXXXXXXXX

XXXXXXX
 XXXXX
  XXX
   X
  XXX
 XXXXX
XXXXXXX


*/
#include <iostream>
#include<cmath>
#include<cstring>
using namespace std;
class CXGraph
{
private:
    int n;
public:
    CXGraph(int num) :n(num) {};
    friend ostream& operator<<(ostream& out,const CXGraph& a);
    CXGraph operator++(int)
    {
        if (n == 21) return CXGraph(*this);
        CXGraph a(n);
        n = n + 2;
        return a;
    }
    CXGraph& operator++()
    {
        if (n == 21) return (*this);
        n = n + 2;
        return *this;
    }
    CXGraph operator--(int)
    {
        if (n == 1) return CXGraph(1);
        CXGraph a(n);
        n = n - 2;
        return a;
    }
    CXGraph& operator--()
    {
        if (n == 1) return *this;
        n = n - 2;
        return *this;
    }
};
ostream& operator<<(ostream& out, const CXGraph& a)
{
    int num = a.n;
    int temp1 = a.n / 2;
    int temp2 = temp1 + 1;
    int temp3 = temp1 - 1;
    int i = 0, j = 1;
    while (temp2!=0)
    {
        for (int k = 0; k < i; k++) cout << " ";
        for (int k = 0; k < temp2 * 2 - 1; k++) cout << "X";
        cout << endl;
        i++;
        temp2--;
    }
    while (temp3!=-1)
    {
        for (int k = 0; k < temp3; k++) cout << " ";
        for (int k = 0; k < (j+1) * 2 - 1; k++) cout << "X";
        cout << endl;
        j++;
        temp3--;
    }
    return out;
}
int main()
{
    int t, n;
    string command;
    cin >> n;
    CXGraph xGraph(n);
    cin >> t;
    while (t--)
    {
        cin >> command;
        if (command == "show++")
        {
            cout << xGraph++ << endl;
        }
        else if (command == "++show")
        {
            cout << ++xGraph << endl;
        }
        else if (command == "show--")
        {
            cout << xGraph-- << endl;
        }
        else if (command == "--show")
        {
            cout << --xGraph << endl;
        }
        else if (command == "show")
        {
            cout << xGraph << endl;
        }
    }
    return 0;
}
