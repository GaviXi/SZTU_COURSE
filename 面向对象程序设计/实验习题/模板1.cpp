/*�������򣨺���ģ�壩
��Ŀ����

��дһ��������������ĺ���ģ�壬��������Ϊ����n��Ԫ�أ�����ΪT��

ע�⣺����ʹ��ģ�庯��


����

��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾ�������ͣ�I��ʾ�������ͣ�C��ʾ�ַ��ͣ�S��ʾ�ַ����ͣ�D��ʾ˫���������ͣ�Ȼ������n��ʾ���鳤�ȡ�

����������n������

��������t��ʵ��


���

ÿ�����һ�����


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
4
I 10
15 3 51 27 9 35 78 14 65 8
D 3
-11.3 25.42 13.2
C 6
a b g e u q
S 4
sandy david eason cindy
�������1
3 8 9 14 15 27 35 51 65 78 
-11.3 13.2 25.42 
a b e g q u 
cindy david eason sandy 
*/
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
template<class t1>
void line(t1*a,int num)
{
    sort(a, a + num);
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
            int *a=new int [num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'C')
        {
            cin >> num;
            char* a = new char[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'S')
        {
            cin >> num;
            string* a = new string[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] << " " << endl;
        }
        else if (judge == 'D')
        {
            cin >> num;
            double* a = new double[num];
            for (int i = 0; i < num; i++)
            {
                cin >> a[i];
            }
            line(a, num);
            for (int i = 0; i < num - 1; i++)
            {
                cout << a[i] << " ";
            }
            cout << a[num - 1] <<" " << endl;
        }
    }
}
