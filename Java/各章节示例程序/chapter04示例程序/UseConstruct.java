package sample;
public class UseConstruct {
 
  public static void main(String[] args) {
   // ����Person���󣬲���ȷ��������������
   Person p = new Person(23, "����");
   p.speak();
  }
}

class Person {

  // Person�ĳ�Ա����age��name
  private int age;
  private String name;
  
  // Person�Ĺ��췽����ӵ�в����б�
  Person(int a, String nm) {
  // ���ܵ���������ʱ���ݽ�����ֵ����ֵ������Ա����
     age = a;
     name = nm;
  }
  
  public void speak() {
     System.out.println("name=" + name + ",age=" + age);
  }
}