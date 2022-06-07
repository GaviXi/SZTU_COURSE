/*����2����Ԫ���������죩
��Ŀ����

����Ŀ����1�Ĵ����������CVector����Ԫ����add���������������ĺ�(��Ӧ�������)��

add��������:

CVector add(const CVector v1, const CVector v2)  //����ͷ�����޸ġ�

�������������ݣ�����������������v1,v2������add(v1, v2).print()�������v1 + v2�ļ�������������print()ΪCVector���е������������

�ɸ�����Ҫ��Ϊ��CVector��ӿ������캯����������Ա������


����

��һ�У�������Դ���t

ÿ��������ݸ�ʽ����:

����ά��n

��һ��nά����ֵ

�ڶ���nά����ֵ

 


���

��ÿ��������ݣ��������nά���������ǵĺ�


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
3
1 2 3
4 5 6
5
1 2 3 4 5
-1 2 4 6 10

�������1
1 2 3
4 5 6
5 7 9
1 2 3 4 5
-1 2 4 6 10
0 4 7 10 15

*/
#include <iostream>
#include <math.h>
using namespace std;
class CVector
{
    int* data;
    int n;
public:
    CVector()
    {
        n = 5;
        data = new int[5]{ 0,1,2,3,4 };
    }
    CVector(int n1, int num[])
    {
        n = n1;
        data = new int[n];
        int i;
        for (i = 0; i < n; i++)
        {
            data[i] = num[i];
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
        }
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
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int num;
        cin >> num;
        int* numarray1 = new int[num];
        int* numarray2 = new int[num];
        int i;
        for (i = 0; i < num; i++)
        {
            cin >> numarray1[i];
        }
        for (i = 0; i < num; i++)
        {
            cin >> numarray2[i];
        }
        CVector a1(num, numarray1);
        CVector a2(num, numarray2);
        CVector a3(add(a1, a2));
        a1.print();
        a2.print();
        a3.print();


    }
    return 0;

}
