 /**ʱ�ӵ����������ǰ��������
��Ŀ����

�ٶ�һ��ʱ�Ӱ���ʱ���֡����������ԣ�ȡֵ��Χ�ֱ�Ϊ0~11��0~59��0~59������Ҫ�����£�

1����һԪ�����++��������ǰ�����ķ�����ʵ��ʱ�ӵĵ������������Ҫ��ʱ�ӵ���5�룬��ִ��5�Ρ�  ++<����> �� �Ĳ���

2����һԪ�����--�������Ǻ������ķ�����ʵ��ʱ�ӵĵ�������������Ҫ��ʱ�ӵ���10�룬��ִ��10�Ρ� <����>-- ���Ĳ���

3���ù��캯���ķ���ʵ��ʱ�Ӷ���ĳ�ʼ�������������ʵ��ʱ����Ϣ�����

clock��time��ϵͳ�ڲ����������Բ�Ҫ������������������


����

��һ������ʱ�ӵĵ�ǰʱ��ʱ���֡���

�ڶ�������t��ʾ��t��ʾ��

����������t������x�����xΪ�����������ʾִ�е��������ʹ�����������++�����xΪ�����������ʾִ�е���������ʹ�����������--

ÿ�εĵ��������������ǳн���һ�ε�����Ľ�����У������ȵ���10�룬�ٵ���2�룬��ô����2���ǽ��ŵ���10���Ľ�����е�

 

 


���

ÿ�����ÿ��ʱ�ӵ����������ʱ����

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
11 58 46
4
5 70 -22 -55

�������1
11:58:51
0:0:1
11:59:39
11:58:44

**/
#include <iostream>
using namespace std;
class Vector
{
    int vec[10];
public:
    Vector(int v[10])
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = v[i];
        }
    }
    Vector() 
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = 0;
        }
    };
    Vector(const Vector& a)
    {
        for (int i = 0; i < 10; i++)
        {
            vec[i] = a.vec[i];
        }
    };
    Vector operator+(Vector& a)
    {
        Vector b;
        for (int i = 0; i < 10; i++)
        {
            b.vec[i] = a.vec[i] + vec[i];
        }
        return b;
    }
    Vector operator-(Vector& a)
    {
        Vector b;
        for (int i = 0; i < 10; i++)
        {
            b.vec[i] = vec[i] - a.vec[i];
        }
        return b;
    }
    friend ostream& operator<<(ostream& out,const Vector&);
};
ostream& operator<<(ostream& out, const Vector& a)
{
    for (int i = 0; i < 9; i++)
    {
        cout << a.vec[i] << " ";
    }
    cout << a.vec[9];
    return out;
}
int main()
{
    int a[10];
    int b[10];
    int i;
    for (i = 0; i < 10; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i < 10; i++)
    {
        cin >> b[i];
    }
    Vector c(a), d(b);
    Vector e = c + d;
    Vector f = c - d;
    cout << e << endl;
    cout << f;
    return 0;
}
