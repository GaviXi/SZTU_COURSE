/*������ģ�壨��ģ�壩
��Ŀ����

���һ��������ģ��Matrix��֧�������������͵����ݡ�

Ҫ�����ٰ���2����Ա����������ת�ú���transport���Լ���ӡ�������print

��дmain�������в��ԣ�������ĳ�Ա�������ת�ú������


����

��һ��������t����ʾ��t����������

�ӵڶ��п�ʼ����ÿ���������������ݡ�

���������������ͣ�I��ʾint��D��ʾdouble��C��ʾchar������������������m��n���ֱ��ʾ������к���

��������������Ԫ�أ�һ��m�У�ÿ��n������

 

 


���

���ת�ú�ľ���


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
2
I 2 3
1 2 3
4 5 6
C 3 3
a b c
d e f
g h i
�������1
1 4
2 5
3 6
a d g
b e h
c f i
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
class Matrix
{
private:
    int h;
    int l;
    t1** p;
public:
    Matrix(int h, int l)
    {
        this->h = h;
        this->l = l;
        p = new t1*[h];
        for (int i = 0; i < h; i++)
        {
            *(p + i) = new t1[l];
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l; j++)
            {
                cin >> p[i][j];
            }
        }
    }
    void print()
    {
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l-1; j++)
            {
                cout<< p[i][j]<<" ";
            }
            cout << p[i][l-1] << endl;
        }
    }
    void transport()
    {
        t1** q = new t1*[l];
        for (int i = 0; i < l; i++)
        {
            *(q + i) = new t1[h];
        }
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < l ; j++)
            {
                q[j][i]=p[i][j] ;
            }
        }
        delete[]p;
        p = q;
        int a = h;
        int b = l;
        h = b;
        l = a;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char judge;
        cin >> judge;
        int h, l;
        if (judge == 'I')
        {
            cin >> h >> l;
            Matrix<int> a(h,l);
            a.transport();
            a.print();
        }
        else if (judge == 'D')
        {
            cin >> h >> l;
            Matrix<double> a(h, l);
            a.transport();
            a.print();
        }
        else if (judge == 'C')
        {
            cin >> h >> l;
            Matrix<char> a(h, l);
            a.transport();
            a.print();
        }
    }
}
