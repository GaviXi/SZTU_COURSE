class Outer
{   
     int i=30;
     public void method()
     {	
      class Inner                   //����һ���ֲ��ڲ���
      {   public void innerMethod()
          { 
            System.out.println("�ⲿ��ĳ�Ա����ֵΪ��"+i);     
          }           
      }
      Inner n=new Inner();
      n.innerMethod();
     }
}	
public class InnerTest7
{
	public static void main(String[] args)
	{
		Outer ot=new Outer();            //�����ⲿ�����
		ot.method();                    //�����ڲ����г�Ա
	}
}
