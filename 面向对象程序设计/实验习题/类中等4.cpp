/* ����4���ิ�ϣ�
��Ŀ����

Ϊ����1��Ŀ��ʵ�ֵ�CVector�����ӳ�Ա����float Average()������nά������ƽ��ֵ�����ء�

����CStudent�࣬˽�����ݳ�ԱΪ��

string name;  // ����

CVector score;  // n���ɼ�

��1����ӹ��캯���������name1��n1������a1��ʼ��CStudent�����

��2����������������������ʽ���CStudent����ֵ��

�������������ݣ�����CStudent����


����

������У�ÿ�и�ʽΪ��ѧ������ ��Ŀn   n���ɼ�


���

��ÿ�в������ݣ�����ѧ����������������ݣ�

ѧ������ n���ɼ� �ɼ���ƽ��ֵ(����2λС��)


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
wangwu  5  90 80 70 100 90
lisi 3 100 90 100

�������1
wangwu 90 80 70 100 90 86.00
lisi 100 90 100 96.67

*/
#include <iostream>
#include <iomanip>
using namespace std;
class CStudent;
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
    float Average()
    {
        int i;
        float sumnum=0;
        for (i = 0; i < n; i++)
        {
            sumnum = sumnum + data[i];
        }
        return  sumnum / n;
    }
    friend CVector add(const CVector v1, const CVector v2);
    friend CStudent;
};

class CStudent
{
    string name;
    CVector score;
public:
    CStudent(string name1, int n1, int* a1) :name(name1),score(n1,a1){}
    void print()
    {
        cout << name  << " " << score.data[0];
        int i;
        for (i = 1; i < score.n; i++)
        {
            cout << " " << score.data[i];
        }
        cout << fixed << setprecision(2) << " " << score.Average() << endl;
    }

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
    string name;
    while (cin >> name)
    {
        int num, i;
        cin >> num;
        int* p = new int[num];
        for (i = 0; i < num; i++)
        {
            cin >> p[i];
        }
        CStudent student(name, num, p);
        student.print();

    }
    return 0;

}
