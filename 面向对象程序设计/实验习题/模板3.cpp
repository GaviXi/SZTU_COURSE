/*˭��Ʊ����ߣ�����ģ�壩
��Ŀ����

ĳС��ҪƱѡ�򳤣���Ʊ����ߵ�ѡ��������ͶƱ���Ʋ���ȫ������ÿ��ͶƱʱ����ѡ����ͶƱϵͳ��ʶ�������Ͳ�һ�¡����д����ģ�壬����Զ������͵����ݣ����ҳ���Ʊ��ߵ�Ԫ�ء����У�ÿ��ͶƱ��ѡƱ��n�ţ�ʶ��������ΪT

ע�⣺����ʹ��ģ�庯��



 


����

��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾʶ�������ͣ�I��ʾ�������ͣ�C��ʾ�ַ��ͣ�S��ʾ�ַ����ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

��������t��ʵ��


���

ÿ�����һ��������ֱ������ѡ�ߵ�ʶ����͵�Ʊ�����Կո�ֿ���


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
3
I 10
5 3 5 2 9 7 3 7 2 3
C 8
a b a e b e e q
S 5
sandy david eason cindy cindy

�������1
3 3
e 3
cindy 2
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
void  ff(t1*a,int num)
{
    t1* p = new t1[num];
    int* q = new int[num] {0};
    int j = 1;
    int flag;
    p[0] = a[0];
    for (int i = 1; i < num; i++)
    {
        flag = 0;
        for (int k = 0; k < j; k++)
        {
            if (p[k] == a[i])
            {
                q[k]++;
                flag = 1;
                break;
            };
        }
        if (flag == 0)
        {
            p[j] = a[i];
            j++;
        }
    }
    int max = 0;
    int index = 0;
    for (int i = 0; i < j; i++)
    {
        if (q[i] > max)
        {
            max = q[i];
            index = i;
        }
    }
    cout << p[index] << " " << max+1 << endl;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char judge;
        int num;
        cin >> judge;
        if (judge == 'I')
        {
            cin >> num;
            int* a = new int[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            ff(a, num);
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            ff(a, num);
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            ff(a, num);
        }
    }
}
