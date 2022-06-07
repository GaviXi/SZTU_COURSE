/*������ˣ���������أ�
��Ŀ����

����һ��������MyMatrix�����������н���������ض��壬��*ʵ�־�����ˡ�Ҫ������������������أ�����ú�����multiply��matrix��matrix��ȥʵ�־���֮�������һ�ɼ�0�֡�

 


����

��һ����������Ҫ�ľ������c;
�ڶ����������Ľ���n����������һ��n*n�ľ���;
�����п�ʼ��������c������.
 
 


���

c��������˵Ľ��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
2
2
1 2
1 2
1 0
1 1
�������1
3 2
3 2
*/
#include <iostream>
#include<math.h>
using namespace std;
class MyMatrix
{
private:
    int** jz;
    int n;
public:
    MyMatrix(int n)
    {
        this->n = n;
        jz = new int* [n];
        int i;
        for (i = 0; i < n; i++)
        {
            *(jz + i) = new int[n] {0};
        }
    }
    void set()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n; j++)
            {
                cin >> *(*(jz + i) + j);
            }
        }
    }
    void display()
    {
        int i, j;
        for (i = 0; i < n; i++)
        {
            for (j = 0; j < n - 1; j++)
            {
                cout << jz[i][j] << " ";
            }
            if (i != n - 1)cout << jz[i][n - 1] << endl;
            else cout << jz[i][n - 1];
        }
    }
    MyMatrix operator*(MyMatrix& a)
    {
        MyMatrix p(a.n);
        int  j, k, h;
        int temp = -1;
        for (h = 0; h < n; h++)
        {
            for (k = 0; k < n; k++)
            {
                    for (j = 0; j < n; j++)
                    {
                        p.jz[h][k] += jz[h][j] * a.jz[j][k];
                    }
                
            }
        }
        return p;
    }
};

int main()
{
    int t, n;
    cin >> t >> n;
    MyMatrix text1(n);
    text1.set();
    t--;
    while (t--)
    {
        MyMatrix text2(n);
        text2.set();
        text1 = text1 * text2;
    }
    text1.display();
}
