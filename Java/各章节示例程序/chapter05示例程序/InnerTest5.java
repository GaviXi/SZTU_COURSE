class Outer
{
    static class Inner
	{
	  int i=50;
	}
}	

public class InnerTest5
{
  	public static void main(String[] args)
        {
      	  Outer.Inner ot=new Outer.Inner();     //�����ڲ������
      	  System.out.println("�ڲ����еı���i��ֵΪ��"+ot.i);
        }
}
