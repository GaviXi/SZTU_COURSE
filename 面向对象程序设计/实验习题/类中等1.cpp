/* ����1����Ͷ���
��Ŀ����

n��������a1,a2,...,an��ɵ������Ϊnά������ Ϊnά��������CVector�࣬����˽�����ݳ�Ա��

int *data��//�洢nά����

int n�� //����ά����

�����У�

��1���޲ι��캯��������n=5,data�����ݷֱ�Ϊ0,1,2,3,4��

��2�����캯���������n1������a��ʼ��n��data�����ݣ�

��3���������������ʽ���nά������ֵ��

��4������������

�������������ݣ�����CVector���󲢵�������������ԡ�


����

����n

����nά����

 


���

 

�ֱ�����޲κʹ��ι��캯������2��CVector����������ǵ�ֵ��

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
6
10 1 2 3 4 5


�������1
0 1 2 3 4
10 1 2 3 4 5

*/
#include <iostream>
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
};
int main()
{
    CVector a1;
    int n;
    cin >> n;
    int j;
    int* q = new int[n];
    for (j = 0; j < n; j++)
    {
        cin >> q[j];
    }
    CVector a2(n, q);
    a1.print();
    a2.print();
    return 0;

}
