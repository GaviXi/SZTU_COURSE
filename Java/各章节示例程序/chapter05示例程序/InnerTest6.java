class Outer
{
	public void method()
	{	
          class Inner                   //����һ���ֲ��ڲ���
          {
           int i=50;                 //�ֲ��ڲ���ĳ�Ա����
          }
	  Inner n=new Inner();
	  System.out.println("�ֲ��ڲ���ĳ�Ա����Ϊ��"+n.i);  //ͨ���ڲ������n�����ñ���i
	}
}	
public class InnerTest6
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();            //�����ⲿ�����
		ot.method();                    //�����ڲ����г�Ա
	}
}
