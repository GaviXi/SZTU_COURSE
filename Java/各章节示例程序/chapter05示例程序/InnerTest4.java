class Outer
{
    static class Inner
	{
	  int i=50;
	}
	public void method()
	{
	   Inner n=new Inner();
	   int j=n.i;	
	   System.out.println("��̬�ڲ���ı���ֵΪ"+j);
	}
}	

public class InnerTest4
{
	public static void main(String[] args)
        {
		Outer ot=new Outer();
		ot.method();
        }
}
