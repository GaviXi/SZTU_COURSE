/**���ϣ���������أ�
��Ŀ����

��������һ������ȷ����Ԫ�������ɵ����塣���ϵ������в���������Բ��ȡ�

����A�ͼ���B�Ľ�����������A������B����ͬԪ����ɵļ��ϡ�

����A�ͼ���B�Ĳ��������������ڼ���A�����ڼ���B��Ԫ������ɵļ��ϡ�

����B���ڼ���A����Բ���������A-B��������A��������B��Ԫ����ɵļ��ϡ�

���輯��A={10��20��30}������B={1��10��50��8}����A��B�Ĳ���{10��20��30,1,50,8}��A��B�Ľ���{10}��B����A����Բ�����{20,30}��

��������������CSet�����԰����������е�Ԫ�ظ���n������ָ��data�洢�����е�Ԫ�ء�

�����У������������������ʽ��������е�Ԫ�ء�

                      ����+��������󼯺�A�ͼ���B�Ĳ����������ؽ�����ϡ�

                     ����-��������󼯺�B���ڼ���A����Բ����������ؽ�����ϡ�

                       ����*��������󼯺�A�ͼ���B�Ľ����������ؽ�����ϡ�

���������뼯��A��B�����ݣ����㼯�ϵĲ���������Բ���

�ɸ�����Ŀ��ΪCSet�������Ҫ�ĳ�Ա������

                        

        


����

 ���Դ���

ÿ������������У���ʽ���£�

��һ�У�����A��Ԫ�ظ�����Ԫ��

�ڶ��У�����B��Ԫ�ظ�����Ԫ��


���

 ÿ���������������£�

��һ�У�����A

�ڶ��У�����B

�����У�A��B�Ĳ�

�����У�A��B�Ľ�

�����У�B����A����Բ��� �� A����B����Բ����Ĳ�����(A-B)+(B-A)

ÿ��������ݼ��Կ��зָ���


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
3 10 20 30
4 10 1 2 3
5 100 2 3 4 -10
6 -34 12 2 4 90 100

�������1
A:10 20 30
B:10 1 2 3
A+B:10 20 30 1 2 3
A*B:10
(A-B)+(B-A):20 30 1 2 3

A:100 2 3 4 -10
B:-34 12 2 4 90 100
A+B:100 2 3 4 -10 -34 12 90
A*B:100 2 4
(A-B)+(B-A):3 -10 -34 12 90
**/
#include <iostream>
using namespace std;
class Cset
{
private:
    int n;
    int* data;
public:
    Cset(int n)
    {
        this->n = n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            cin >> data[i];
        }
    }
    Cset(int n, int i)
    {
        this->n = n;
        data = new int[n];
    }
    Cset(int sum, const Cset a)
    {
        n = sum;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = a.data[i];
        }
    }
    Cset(const Cset& a)
    {
        n = a.n;
        data = new int[n];
        for (int i = 0; i < n; i++)
        {
            data[i] = a.data[i];
        }
    }
    Cset operator+(const Cset& a)
    {
        int num = a.n + n;
        Cset c(num,1);
        int cot = 0;
        for (int i = 0; i < n; i++)
        {
            c.data[i] = data[i];
            cot++;
        }
        int flag;
        for (int i = 0; i < a.n; i++)
        {
            flag = 0;
            for (int j = 0; j < cot; j++)
            {
                if (a.data[i] == data[j]) flag = 1;
            }
            if (flag == 0)
            {
                c.data[cot] = a.data[i];
                cot++;
            }
        }
        return Cset(cot, c);
    }
    Cset operator*(const Cset& a)
    {
        int num = a.n + n;
        Cset c(num, 1);
        int cot = 0;
        int flag;
        for (int i = 0; i < n; i++)
        {
            flag = 0;
            for (int j = 0; j < a.n; j++)
            {
                if (data[i] == a.data[j])
                {
                    flag = 1;
                }
            }
            int flag2 = 0;
            if (flag == 1)
            {
                for (int k = 0; k < cot; k++)
                {
                    if (data[i] == c.data[k])
                        flag2 = 1;
                }
            }
            if (flag2 == 0&&flag==1)
            {
                c.data[cot] = data[i];
                cot++;
            }
        }
        return Cset(cot, c);
    }
    Cset operator-(const Cset& a)
    {
        Cset text(*this);
        int cot = 0;
        for (int i = 0; i < text.n; i++)
        {
            for (int j = 0; j < a.n; j++)
            {
                if (text.data[i] == a.data[j])
                {
                    text.data[i] = 999999;
                }
            }
        }
        for (int i = 0; i < text.n; i++)
        {
            if (text.data[i] != 999999) cot++;
        }
        Cset c(cot, 1);
        int h = 0;
        for (int i = 0; i < text.n; i++)
        {
            if (text.data[i] != 999999)
            {
                c.data[h] = text.data[i];
                h++;
            }
        }
        return Cset(cot, c);
    }
    friend ostream& operator<<(ostream& out,const Cset& a);
};
ostream& operator<<(ostream& out, const Cset& a)
{
    for (int i = 0; i < a.n-1; i++)
    {
        cout << a.data[i] << " ";
    }
    cout << a.data[a.n-1];
    cout << endl;
    return out;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n;
        Cset a(n);
        cin >> m;
        Cset b(m);
        cout << "A:" << a;
        cout << "B:" << b;
        cout <<"A+B:"<< a + b;
        cout <<"A*B:" << a * b;
        cout << "(A-B)+(B-A):" << (a - b) + (b - a);
        cout << endl;
    }
    return 0;
}

