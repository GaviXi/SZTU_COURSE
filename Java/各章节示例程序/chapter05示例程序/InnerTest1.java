class Outer
{
    int i=100;
	class Inner
	{
		public void method()
		{
			System.out.println("�ⲿ���еĳ�Ա����:"+i);
		}
	}
}

public class InnerTest1
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();
		Outer.Inner In=ot.new Inner();
		In.method();
	}
}