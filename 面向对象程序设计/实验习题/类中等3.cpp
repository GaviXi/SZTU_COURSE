/*����3����̬��Ա��
��Ŀ����

Ϊ����1��Ŀʵ�ֵ�CVector�����˽�о�̬��Աsum���ڳ�ʼ�������ͬʱ��ͳ�����ж����nά������sum��

���������ɶ�����󣬲��������͡�

�ɸ�����Ҫ���������Ҫ�ľ�̬��Ա��������ӷǾ�̬��Ա�������÷֡�


����

���Դ���t

ÿ��������ݸ�ʽ���£�

����m,��ʾnά��������Ŀ

���m�У�ÿ�и�ʽ������ά��n  nά����ֵ


���

��ÿ��������ݵ�m��������������������ķ�����sum


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
2
5 1 2 3 4 5
3 4 5 6
3
2 1 2 
3 10 20 30
2 11 22

�������1
1 2 3 4 5
4 5 6
30
1 2
10 20 30
11 22
96
*/
#include <iostream>
#include <math.h>
using namespace std;
class CVector
{
    int* data;
    int n;
    static int sum;
public:
    CVector()
    {
        n = 5;
        data = new int[5]{ 0,1,2,3,4 };
        sum = sum + 10;
    }
    CVector(int n1, int num[])
    {
        n = n1;
        data = new int[n];
        int i;
        for (i = 0; i < n; i++)
        {
            data[i] = num[i];
            sum = sum + data[i];
        }
    }
    void print()
    {
        cout << data[0];
        int i;
        for (i = 1; i < n; i++)
        { 
            cout << " " << data[i];
        }
        cout << endl;
    }
    ~CVector()
    {
        delete[]data;
    }
    CVector(const CVector& a)
    {
        n = a.n;
        int len = n;
        data = new int[len];
        int i;
        for (i = 0; i < len; i++)
        {
            data[i] = a.data[i];
            sum = sum + data[i];
        }
    }
    static int putsum()
    {
        return sum;
    }
    static void offsum()
    {
        sum = 0;
    }
    friend CVector add(const CVector v1, const CVector v2);
};
CVector add(const CVector v1, const CVector v2)
{
    CVector v3(v2);
    int i;
    for (i = 0; i < v2.n; i++)
    {
        v3.data[i] = v3.data[i] + v1.data[i];
    }
    return v3;
}
int CVector::sum = 0;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        int summary = 0;
        cin >> m;
        while (m--)
        {
            int num;
            cin >> num;
            int i;
            int* numarray = new int[num];
            for (i = 0; i < num; i++)
            {
                cin >> numarray[i];
            }
            CVector a1(num, numarray);
            a1.print();
            summary = a1.putsum();
        }
        cout << summary << endl;
        CVector::offsum();
    }
    return 0;

}
