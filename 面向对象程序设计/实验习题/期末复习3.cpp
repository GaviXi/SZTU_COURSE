/* ���������ǣ�����ģ�壩
��Ŀ����

��������һ�����ԣ�ֻҪ���콣���������а��ص�����ƴ��һ�𣬾��ܵõ������޵е��ڹ����š����һ������ģ�壬���ƴ�յĹ��ܣ������콣���������ӵ��������ĺ��棩�������������. ����ÿ��������n��Ԫ����ɣ�����ΪT��

 


����

��һ������t��ʾ��t������ʵ��

�ڶ���������һ����д��ĸ��ʾ�������ͣ�I��ʾ�������ͣ�D��ʾ˫���������ͣ�C��ʾ�ַ��ͣ�Ȼ������n��ʾ���ݸ�����

�������������콣��n������

������������������n������

��������t��ʵ��

 


���

 

ÿ�����һ�����

 


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
2
I 5
5 3 51 27 9
27 0 0 5 1
C 5
kitty
hello
�������1
2700515351279
hellokitty
*/
#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;
template<class T>
void knife(int num)
{
    T* p = new T[num];
    T* q = new T[num];
    for (int i = 0; i < num; i++)
    {
        cin >> *(p + i);
    }
    for (int i = 0; i < num; i++)
    {
        cin >> *(q + i);
    }
    for (int i = 0; i < num; i++)
    {
        cout<<  *(q + i);
    }
    for (int i = 0; i < num; i++)
    {
        cout<< *(p + i);
    }
    cout << endl;
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char a;
        int num;
        cin >> a>>num;
        if (a == 'I')
        {
            knife<int>(num);
        }
        else if (a == 'D')
        {
            knife<double>(num);
        }
        else if(a=='C')
        {
            knife<char>(num);
        }
    }
    return 0;
}
