<<<<<<< HEAD
/* Բ��Բ������㣨�̳У�
��Ŀ����

����һ��CPoint���࣬�������ݳ�Աx,y������㣩��

��CPointΪ���࣬������һ��Բ����CCircle���������ݳ�Աr(�뾶����һ������Բ����ĳ�Ա������

����CCircle��Ϊֱ�ӻ��࣬������һ��Բ������CCylinder���������ݳ�Աh(��)��һ����������ĳ�Ա������

����Բ��Բ������󣬵��ó�Ա��������������������������
=======
/*��ְ�о��������ؼ̳У�
��Ŀ����

1���������µ���̳нṹ��

1)  ����һ����Ա��CPeople�������ԣ��������ͣ��У��������Ա����䣻

2)  ��CPeople��������ѧ����CStudent��������ԣ�ѧ�ź���ѧ�ɼ���

3)  ��CPeople������������ʦ��CTeacher��������ԣ�ְ�񡢲��ţ�

4)   ��CStudent��CTeacher�๲ͬ��������ְ�о�����CGradOnWork��������ԣ��о����򡢵�ʦ��

2���ֱ���������Ĺ��캯�����������print����������������Ҫ����

3�����������ж��������Ķ��󣬲�����֮��
>>>>>>> 5e2661b (week16)


����

<<<<<<< HEAD
����Բ��Բ��λ�á��뾶

����Բ����Բ��λ�á��뾶����
=======
��һ�У������Ա����䣬����������ַ�����Ϊ20

�ڶ��У�ѧ�ųɼ�

�����У�ְ���ţ�ְ��Ͳ��ŵ�����ַ����Ⱦ�Ϊ20

�����У��о�����ʦ���о�����͵�ʦ����󳤶Ⱦ�Ϊ20
>>>>>>> 5e2661b (week16)


���

<<<<<<< HEAD
���Բ��Բ��λ�� �뾶

���Բ���

���Բ�����Բ��λ�� �뾶 ��

���Բ�������

��������
0 0 1
1 1 2 3

�������
Circle:(0,0),1
Area:3.14
Cylinder:(1,1),2,3
Volume:37.68

*/
#include <iostream>
using namespace std;

class CPoint
{
public:
    void getpoint(int a,int b)
    {
        x = a;
        y = b;
    }
protected:
    int x;
    int y;
};
class CCircle : public CPoint
{
protected:
    int r;
public:
    CCircle() { };
    CCircle(int a, int b, int c)
    {
        getpoint(a, b);
        r = c;
        cout << "Circle:(" << a << "," << b << ")," << r << endl;
    }
    void getcircle(int a,int b,int c)
    {
        x = a;
        y = b;
        r = c;
    }
    double Area()
    {
        return 3.14 * r * r;
    }
    void getArea()
    {
        cout << "Area:" << 3.14 * r * r << endl;
    }
};
class CCylinder :public CCircle
{
public:
    CCylinder(int a,int b,int c,int h)
    {
        getcircle(a, b, c);
        high = h;
        cout << "Cylinder:(" << a << "," << b << ")," << c <<","<< h << endl;
    }
    void getVolume()
    {
        cout << "Volume:" << Area() * high << endl;
    }
protected:
    int high;
};

int main()
{
    int a,b, c;
    cin >> a >> b >> c;    
    CCircle A(a, b, c);
    A.getArea();
    int d;
    cin >> a >> b >> c >> d;
    CCylinder B(a, b, c, d);
    B.getVolume();
    return 0;
=======
��һ�У�People:

�ڶ��м��Ժ���У���ʽ��Sample


�����鿴ģʽ 
������ʾ
�鿴��ʽ
��������1 <-����
wang-li m 23
2012100365 92.5
assistant computer
robot zhao-jun
�������1
People:
Name: wang-li
Sex: m
Age: 23

Student:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5

Teacher:
Name: wang-li
Sex: m
Age: 23
Position: assistant
Department: computer

GradOnWork:
Name: wang-li
Sex: m
Age: 23
No.: 2012100365
Score: 92.5
Position: assistant
Department: computer
Direction: robot
Tutor: zhao-jun*/
#include <iostream>
#include<cstring>
#include<cmath>
using namespace std;
class CPeople
{
public:
    CPeople(string name1, char sex1, int age1) :name(name1), sex(sex1), age(age1) {}
    void print()
    {
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
    }
protected:
    string name;
    char sex;
    int age;
};
class CStudent :public CPeople
{
public:
    CStudent(string name1, char sex1, int age1, string no1, double grade1) :CPeople(name1, sex1, age1), no(no1), grade(grade1) {}
    void print()
    {
        cout << "Student:\n";
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
        cout << "No.: " << no << "\n"
            << "Score: " << grade << "\n";
    }
protected:
    string no;
    double grade;
};
class CTeacher :public CPeople
{
public:
    CTeacher(string name1, char sex1, int age1, string zhiwu1, string bumen1) :CPeople(name1, sex1, age1), zhiwu(zhiwu1), bumen(bumen1) {}
    void print()
    {
        cout << "Teacher:\n";
        cout << "Name: " << name << "\n"
            << "Sex: " << sex << "\n"
            << "Age: " << age << "\n";
        cout << "Position: " << zhiwu << "\n"
            << "Department: " << bumen << "\n";
    }
protected:
    string zhiwu;
    string bumen;
};
class CGradOnWork :public CStudent,public CTeacher
{
public:
    CGradOnWork(string name1, char sex1, int age1, string no1, double grade1, string zhiwu1, string bumen1, string research1, string daoshi1) :CStudent(name1, sex1, age1, no1, grade1), CTeacher(name1, sex1, age1, zhiwu1, bumen1), research(research1), daoshi(daoshi1) {}
    void print()
    {
        cout << "GradOnWork:\n";
        cout << "Name: " << CStudent::name << "\n"
            << "Sex: " << CStudent::sex << "\n"
            << "Age: " << CStudent::age << "\n";
        cout << "No.: " << no << "\n"
            << "Score: " << grade << "\n";
        cout << "Position: " << zhiwu << "\n"
            << "Department: " << bumen << "\n";
        cout << "Direction: " << research << "\n"
            << "Tutor: " << daoshi << "\n";

    }
protected:
    string research;
    string daoshi;
};
int main()
{
    string a, d, f, g, h, i;
    char b;
    int c;
    double e;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i;
    CPeople peo(a, b, c);
    CStudent cst(a, b, c, d, e);
    CTeacher cta(a, b, c, f, g);
    CGradOnWork gra(a, b, c, d, e, f, g, h, i);
    cout << "People:\n";
    peo.print();
    cout << endl;
    cst.print();
    cout << endl;
    cta.print();
    cout << endl;
    gra.print();


>>>>>>> 5e2661b (week16)
}
