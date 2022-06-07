/*�����˱���������󣩡�����ģ�⡿
��Ŀ����

��дһ���������࣬���������л�������Ѫ�����˺�ֵ������ֵ�����ͺ͵ȼ�������Ѫ�����˺��ͷ����͵ȼ���������أ�
��ͨ�ͻ����ˣ�����ΪN��Ѫ�����˺��������ǵȼ���5��
�����ͻ����ˣ�����ΪA�������ǵȼ���10�����������Ժ���ͨ��һ��
�����ͻ����ˣ�����ΪD�������ǵȼ���10�����������Ժ���ͨ��һ��
�����ͻ����ˣ�����ΪH�������ǵȼ���50�����������Ժ���ͨ��һ����
�����˲�����������ӡ���������ԵĻ�ȡ�����÷��������캯�����п��ޣ�������Ҫ���б�д��

��дһ��ȫ�ֺ������ڻ����˱���ʹ�ø������ͻ������ܹ��໥ת�䡣�������������˶���ָ��ͱ����Ļ��������ͣ��������޸Ļ��������ͣ���������ص����ԡ�����������ͺͻ�����ԭ�������Ͳ�ͬ����ִ�б����ܣ�������true������������ͺ�ԭ��������ͬ����ִ�б���������false.

Ҫ���������ݳ�Ա����˽�����ԣ���C++���Ժ�����������˼�������ʵ������Ҫ��


����

��һ������t����ʾҪִ��t�λ����˱���

����ÿ���У�һ������һ�������˵����ԣ����������������͡��ȼ�����������󳤶�Ϊ20����һ�������������

������������


���

ÿ����������Ļ�������Ϣ��Ҫ����û����˵Ĵ�ӡ�������������ʹ�����˲�����Ҳ���

�����������Ϊ�����ơ����͡��ȼ���Ѫ�����˺�������

���һ�����ִ�б���Ĵ���


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
3
X001 N 5
H
X002 A 5
D
X003 D 5
D

�������1
X001--H--5--250--25--25
X002--D--5--25--25--50
X003--D--5--25--25--50
The number of robot transform is 2

*/
#include<iostream>
#include<string.h>
using namespace std;

class robot
{
public:
    void print()
    {
        cout << name << "--" << kind << "--" << rank << "--" << blood << "--" << hit << "--" << defend << endl;
    }
    robot(char name1[21], char kind1, int rank1)
    {
        strcpy(name, name1);
        kind = kind1;
        rank = rank1;
        switch (kind)
        {
        case 'N':
            hit = blood = defend = rank * 5;
            break;
        case 'A':
            hit = rank * 10;
            blood = defend = rank * 5;
        case 'D':
            defend = rank * 10;
            hit = blood = rank * 5;
        case 'H':
            blood = rank * 50;
            hit = defend = rank * 5;
        }
    }
    friend bool change(robot*a,char kind1);

private:
    char name[21];
    int blood;
    int hit;
    int defend;
    char kind;
    int rank;
};
bool change(robot* a, char kind1)
{
    int flag = 0;
    if (a->kind != kind1)
    {
        flag = 1;
    }
    a->kind = kind1;
    switch (a->kind)
    {
    case 'N':
        a->hit = a->blood = a->defend = a->rank * 5;
        break;
    case 'A':
        a->hit = a->rank * 10;
        a->blood = a->defend = a->rank * 5;
        break;
    case 'D':
        a->defend = a->rank * 10;
        a->hit = a->blood = a->rank * 5;
        break;
    case 'H':
        a->blood = a->rank * 50;
        a->hit= a->defend = a->rank * 5;
        break;
    }
    if (flag == 1) return true;
    else return false;

}






int main()
{
    int t;
    int sum=0;
    cin >> t;
    while (t--)
    {
        char name1[21];
        char kind1;
        int rank1;
        cin >> name1 >> kind1 >> rank1;
        robot a(name1, kind1, rank1);
        char kind2;
        cin >> kind2;
        if (change(&a, kind2))
        {
            sum++;
        }
        a.print();
    }
    cout << "The number of robot transform is "
        << sum << endl;

}
