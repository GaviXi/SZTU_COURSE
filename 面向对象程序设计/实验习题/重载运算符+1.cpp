/*���������������������أ�
��Ŀ����

����һ��������࣬����Ԫ���ǡ��������Ǹ��������ԣ�����������ʼ�������

��ʼ���ù��캯��ʵ�֣�����һ������������������ΪС�������λ������ת��ΪԪ���ǡ��֣���������1.23Ԫ���������캯��תΪ1Ԫ��2�ǡ�3��

����������������������������������ʽ��ʾ��

 

 


����

��һ������t��ʾ��t��ʵ��

�ڶ���������t����������������λС����ÿ����ֵ��ʾ��ԪΪ��λ������ҽ��

 


���

ÿ������Ѹ�����������ҽ�ת��ΪԪ�Ƿֵ�������ʽ�����忴���

 


�����鿴ģʽ
������ʾ
�鿴��ʽ
��������1<-����
2
2.45
1.38

�������1
yuan=2 jiao=4 fen=5
yuan=1 jiao=3 fen=8

*/
#include <iostream>
#include<cmath>
using namespace std;
class rnb
{
public:
    rnb(double m) :money(m) {};
    friend ostream& operator<<(ostream& out, rnb& text);
private:
    double money;
};
ostream& operator<<(ostream& out, rnb& text)
{
    int yuan = floor(text.money);
    int jiao = floor((text.money - yuan) * 10);
    int fen = text.money * 100 - yuan * 100 - jiao * 10;
    cout << "yuan=" << yuan << " " << "jiao=" << jiao << " " << "fen="
        << fen;
    return out;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        double text2;
        cin >> text2;
        rnb a(text2);
        cout << a << endl;
    }
}
