/*Ԫ�ز��ң�����ģ�壩
��Ŀ����

��дһ���������н��в��ҵĺ���ģ�壬��������Ϊ����n��Ԫ�أ�����ΪT��Ҫ���ҵ�Ԫ��Ϊkey��



ע�⣺����ʹ��ģ�庯��

����

��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾ�������ͣ�I��ʾ�������ͣ�D��ʾ˫���������ͣ�C��ʾ�ַ��ͣ�S��ʾ�ַ����ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

����������key

��������t��ʵ��


���

ÿ�����һ��������ҵ����key�������еĵڼ���Ԫ�أ���1��ʼ�����Ҳ������0


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
4
I 5
5 3 51 27 9
27
D 3
-11.3 25.42 13.2
2.7
C 6
a b g e u q
a
S 4
sandy david eason cindy
cindy
�������1
4
0
1
4

*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
int  ff(t1*a,t1 key,int num)
{
    for (int i = 0; i < num; i++)
    {
        if (a[i] == key)
        {
            return i+1;
        }
    }
    return 0;
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
            int key;
            cin >> key;
            cout << ff(a, key,num) << endl;
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            char key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            string key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
        else if (judge == 'D')
        {
            cin >> num;
            double* a = new double[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            double key;
            cin >> key;
            cout << ff(a, key, num) << endl;
        }
    }
}
