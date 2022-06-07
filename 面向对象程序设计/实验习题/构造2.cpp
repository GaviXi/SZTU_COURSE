/* �����ࣨ���빹�죩
��Ŀ����

������з������ʵ��:

class CFraction
{
private:
     int fz, fm;
public:
     CFraction(int fz_val, int fm_val) ;
     CFraction add(const CFraction &r);
     CFraction sub(const CFraction &r);
     CFraction mul(const CFraction &r);
     CFraction div(const CFraction &r);
     int getGCD();   // �����ķ��Ӻͷ�ĸ�����Լ��
     void print();
};

������a��b�����Լ���ɲ���շת��������ֳ�ŷ������㷨���䲽��Ϊ:

1. ����a, bʹa > b;
2. ��a��b�õ�����r,��r=0,��bΪ���Լ��,�˳�.
3. ��r��Ϊ0,����b����a, r����b,��ʱa,b������һ�ε�С,�����ģ��С��;
4. ������2����

ע�⣺�����ĸ��1�Ļ���Ҳ��������/1���ķ�ʽ�����


����

�������ݵ����� t

��һ���һ������

��һ��ڶ�������

�ڶ����һ������

�ڶ���ڶ�������

......


���

��һ�����������ĺ�

��һ�����������Ĳ�

��һ�����������Ļ�

��һ��������������

�ڶ������������ĺ�

�ڶ������������Ĳ�

�ڶ������������Ļ�

�ڶ���������������

......


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
1/2
2/3
3/4
5/8
21/23
8/13
�������1
7/6
-1/6
1/3
3/4

11/8
1/8
15/32
6/5

457/299
89/299
168/299
273/184


*/
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int judge(int a, int b)
{
    a = abs(a);
    b = abs(b);
    int temp;
    if (b > a)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while (a % b)
    {
        temp = a % b;
        a = b;
        b = temp;
    }
      return b;

}
class CFraction
{
private:
    int fz, fm;
public:
    CFraction(int fz_val, int fm_val);
    CFraction add(const CFraction& r);
    CFraction sub(const CFraction& r);
    CFraction mul(const CFraction& r);
    CFraction div(const CFraction& r);
    int getGCD();// �����ķ��Ӻͷ�ĸ�����Լ��
    void print();
};
CFraction::CFraction(int fz_val, int fm_val) :fz(fz_val), fm(fm_val) {}
int CFraction::getGCD () 
{
    return judge(fz, fm);
}
CFraction CFraction::add(const CFraction& r)
{
    int tempz1 = fz;
    int tempm1 = fm;
    tempz1 = fz * r.fm;
    tempm1= fm * r.fm;
    int tempz2 = r.fz;
    int tempm2 = r.fm;
    tempz2 = r.fz * fm;
    tempm2 = r.fm * fm;
    int FZ = tempz1 + tempz2;
    CFraction a(FZ,tempm1);
    return a;
}
CFraction CFraction::sub(const CFraction& r)
{
    int tempz1 = fz;
    int tempm1 = fm;
    tempz1 = fz * r.fm;
    tempm1 = fm * r.fm;
    int tempz2 = r.fz;
    int tempm2 = r.fm;
    tempz2 = r.fz * fm;
    tempm2 = r.fm * fm;
    int FZ = tempz1 - tempz2;
    CFraction a(FZ, tempm1);
    return a;
}
CFraction CFraction::mul(const CFraction& r)
{

    int FZ = fz * r.fz;
    int FM = fm * r.fm;
    CFraction a(FZ, FM);
    return a;
}
CFraction CFraction::div(const CFraction& r)
{
    int tempz1 = fz;
    int tempm1 = fm;
    tempz1 = fz * r.fm;
    tempm1 = fm * r.fm;
    int tempz2 = r.fz;
    int tempm2 = r.fm;
    tempz2 = r.fz * fm;
    tempm2 = r.fm * fm;
    CFraction a(tempz1, tempz2);
    return a;
}
void CFraction::print()
{
    int t = getGCD();
    fz = fz / t;
    fm = fm / t;
    cout << fz << "/" << fm << endl;
}
int main(void)
{
    int i, t;
    cin >> t;
    for (i = 0; i < t; i++)
    {
        int A, B, C, D;
        char down;
        cin >> A >> down >> B;
        cin >> C >> down >> D;
        CFraction a(A,B), b(C,D);
        (a.add(b)).print();
        (a.sub(b)).print();
        (a.mul(b)).print();
        (a.div(b)).print();
        cout << endl;
    }
    return 0;


}
