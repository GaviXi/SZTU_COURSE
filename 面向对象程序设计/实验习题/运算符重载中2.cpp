/**������������أ�
��Ŀ����

������������CMatrix����ɾ�������롢������벹��CMatrix������Ҫ�ĳ�Ա������

ע�⣺��������CMatrix���Ѹ����벻���޸ģ�ֻ����CMatrix��������µĳ�Ա����������������δʵ�ֵĳ�Ա�������޸���֪���벻�Ʒ֡�

��ʾ�������Ѹ��������CMatrix��Ҫ������Щ�������

#include <iostream>
using namespace std;

// ���������
class CMatrix
{
private:
    int n, m; // n-�У�m-��
    int** data; // �洢��������
public:
    CMatrix();
    CMatrix(int n1, int m1);
    ~CMatrix();
};

CMatrix::CMatrix(int n1, int m1)
{
    n = n1;
    m = m1;
    // ����n��m�еĶ�ά����ռ�
    data = new int* [n];
    for (int i = 0; i < n; i++)
    {
        data[i] = new int[m];
    }
}

CMatrix::~CMatrix()
{
    // �ͷſռ�
    for (int i = 0; i < n; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

int main()
{
    int t, n, m, i, j;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        // ����������matrixA
        CMatrix matrixA(n, m);
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                // �����i�е�j�е�����
                cin >> matrixA[i][j];
            }
        }
        // ���matrixA�е�����
        cout << "matrixA:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << matrixA(i, j) << " ";
            }
            cout << endl;
        }
        // ����������matrixB
        CMatrix matrixB;
        matrixB = matrixA;
        // ���marixB�е�����
        cout << "matrixB:" << endl;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < m; j++)
            {
                cout << matrixB[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
 


����

 ���Դ���

ÿ��������ݸ�ʽ���£�

������n��m���ֱ��ʾ������С���

n*m����������


���

ÿ�����������������������Σ����������ʽ��������


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
3 3
1 2 3
4 5 6
7 8 9
2 4
10 20 30 40
50 60 70 80

�������1
matrixA:
1 2 3 
4 5 6 
7 8 9 
matrixB:
1 2 3 
4 5 6 
7 8 9 
matrixA:
10 20 30 40 
50 60 70 80 
matrixB:
10 20 30 40 
50 60 70 80 

��ʾ

�޲ι��캯������ʵ��**/
#include <iostream>
#include<cmath>
using namespace std;

class js
{
protected:
    int value;
public:
    js(int v) :value(v) {}
    void increment()
    {
        value++;
    }
};

class forjs :public js
{
public:
    forjs(int a, int b, int c) :js(a), minValue(b), maxValue(c) {}
    int increment(int s)
    {
        int num = 0;
        while (s--)
        {
            value++;
            if (value == maxValue)
            {
                value = minValue;
                num++;
            }
        }
        return num;
    }
    int decrement(int s)
    {
        int num = 0;
        s = -s;
        while (s--)
        {
            value--;
            if (value == minValue-1)
            {
                value = maxValue-1;
                num++;
            }
        }
        return num;
    }
    int getvalue()
    {
        return value;
    }
private:
    int minValue;
    int maxValue;
};

class Clock
{
public:
    Clock(int a, int b, int c) :hour(a, 0, 12), minute(b, 0, 60), second(c, 0, 60) {}
    void time(int s)
    {
        int flag1 = second.increment(s);
        int flag2 = minute.increment(flag1);
        hour.increment(flag2);
    }
    void time(int s,int a)
    {
        int flag1 = second.decrement(s);
        int flag2 = minute.decrement(-flag1);
        hour.decrement(-flag2);
    }
    void print()
    {
        cout << hour.getvalue() << ":" << minute.getvalue() << ":" << second.getvalue() << endl;
    }
    Clock& operator++()
    {
        time(1);
        return *this;
    }
    Clock operator--(int)
    {
        Clock a(*this);
        time(-1,1);
        return a;
    }
private:
    forjs hour;
    forjs minute;
    forjs second;
};

int main()
{
    int h, m, s;
    cin >> h >> m >> s;
    Clock text(h, m, s);
    int t,gg;
    cin >> t;
    while(t--)
    {
        cin >> gg;
        if (gg > 0)
        {
            while (gg--)
            {
                ++text;
            }
            text.print();
        }
        else if (gg < 0)
        {
            gg = -gg;
            while (gg--)
            {
                text--;
            }

            text.print();
        }
        else if (gg == 0)
        {
            text.print();
        }
    }
    return 0;
}
