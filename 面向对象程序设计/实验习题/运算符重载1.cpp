/*�����ļӼ��˳�����������أ�
��Ŀ����

Fraction��Ļ�����ʽ���£�

// ����Fraction��
class Fraction
{
private:
    int fz, fm;
    int commonDivisor(); // �������Լ��
    void contracted(); // ��������
public:
    Fraction(int = 0, int = 1);
    Fraction(Fraction&);
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    void set(int = 0, int = 1);
    void disply();
};
Ҫ�����£�
1.ʵ��Fraction�ࣻcommon_divisor()��contracted()�������Ϊ�գ���ʵ�־��幦�ܡ�
2.��дmain��������ʼ������Fraction����ģ���������֮��ļӼ��˳���
 
 


����

��1�У����������1���͵�2��Fraction����ķ��Ӻͷ�ĸֵ��

 

 


���

ÿ�����ηֱ�����Ӽ��˳�������Fraction����ֱ���������ֵ������ҪԼ�򣩡�

 


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
1 3 2 5
�������1
fraction=11/15
fraction=-1/15
fraction=2/15
fraction=5/6
*/
#include <iostream>
#include<math.h>
using namespace std;
class Fraction
{
private:
    int fz, fm;
    int commonDivisor() // �������Լ��
    {
        int maxx = max(fz, fm);
        int minn = min(fz, fm);
        int temp = maxx % minn;
        while (temp != 0)
        {
            maxx = minn;
            minn = temp;
            temp = maxx % minn;
        }
        return minn;
    }
    void contracted(); // ��������
public:
    Fraction(int = 0, int = 1) {};
    Fraction(Fraction& a)
    {
        fz = a.fz;
        fm = a.fm;
    }
    Fraction operator+(Fraction);
    Fraction operator-(Fraction);
    Fraction operator*(Fraction);
    Fraction operator/(Fraction);
    void set(int = 0, int = 1);
    void disply();
};
void Fraction::set(int a, int b)
{
    fz = a;
    fm = b;
}
void Fraction::contracted()
{
    fz = fz / commonDivisor();
    fm = fm / commonDivisor();
}
Fraction Fraction::operator-(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    int afm = fm;
    int bfm = tt.fm;
    text.fm = text.fm * bfm;
    text.fz = text.fz * bfm;
    tt.fm = tt.fm * afm;
    tt.fz = tt.fz * afm;
    text.fz -= tt.fz;
    return text;
}
Fraction Fraction::operator+(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    int afm = fm;
    int bfm = tt.fm;
    text.fm = text.fm * bfm;
    text.fz = text.fz * bfm;
    tt.fm = tt.fm * afm;
    tt.fz = tt.fz * afm;
    text.fz += tt.fz;
    return text;
}
Fraction Fraction::operator*(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    text.fz = text.fz * tt.fz;
    text.fm = text.fm * tt.fm;
    return text;
}
Fraction Fraction::operator/(Fraction tt)
{
    Fraction text;
    text.set(fz, fm);
    text.fz = text.fz * tt.fm;
    text.fm = text.fm * tt.fz;
    return text;
}
void Fraction::disply()
{
    cout << "fraction=" << fz << "/" << fm << endl;
}
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    Fraction text1, text2;
    text1.set(a, b);
    text2.set(c, d);
    Fraction text3,text4,text5,text6;
    text3 = text1 + text2;
    text4 = text1 - text2;
    text5 = text1 * text2;
    text6 = text1 / text2;
    text3.disply();
    text4.disply();
    text5.disply();
    text6.disply();
    return 0;
}
