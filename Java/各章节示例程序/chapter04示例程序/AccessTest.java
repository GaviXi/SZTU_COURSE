/**
 *��ʾ���ݷ�װ��
 */
package sample;
class EncapTest {
   int a; // Ĭ�ϴ�ȡ���ƣ�default access��
   public int b; //���д�ȡ���ƣ�public access��
   private int c; //˽�д�ȡ���ƣ�private access��
   // ����c�ķ���
   void setc(int i) {//�趨c��ֵ
     c = i;
   }
   int getc() { //���c��ֵ
     return c;
   }
}

public class AccessTest {
   public static void main(String args[]) {
     EncapTest ob = new EncapTest();
     // ���´�������ȷ��
     ob.a = 10;
     ob.b = 20;
     // ���´�����������
     // ob.c = 30; 
     // ���Ǳ���ͨ�����еķ�������c
     ob.setc(30); // ��ȷ
     System.out.println("a��b��and c: " + ob.a + " " +ob.b + " " + ob.getc());
   }
}
