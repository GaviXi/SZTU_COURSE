/**
* ��ʾ˽��������̳�
*/
//A�Ǹ���.
package sample;
class A { 
   int i; //Ĭ�ϴ�ȡ����
   private int j; //˽�б���
   void setij(int x, int y) {
     i = x;
     j = y;
   }
}
//B���ܻ�ȡA�е�˽�б���
class B extends A {
   int total;
   void sum() {
     total = i + j; //����j ���ܱ���ȡ
   }
}

class Access {
   public static void main(String args[]) {
     B subOb = new B();
     subOb.setij(10, 12);
     subOb.sum();
     System.out.println("Total is " + subOb.total);
   }
}
