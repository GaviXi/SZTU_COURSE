class InnerFather
{
	public void method()                    //�����еķ���
	{
	  System.out.println("�����ڲ��ุ��ķ���");
	}
}
public class InnerTest8
{
	public static void main(String[] args)
	{
	   InnerFather nf=new InnerFather()             //���������ڲ���
	   {
		  public void method()                    //��д�����еķ���
	    {
			System.out.println("���������ڲ���ķ���");
		}
	};
	nf.method();                                  //���������ڲ����еķ���
	}
}
