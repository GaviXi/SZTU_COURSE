class Outer       //����һ���ⲿ��
{ 
  int outer_x = 100;    //�ⲿ���Ա
  class Inner     //����һ���ڲ���
  {          
      void display()    //�ڲ����Ա
      {
         System.out.println("display: outer_x = " + outer_x);
       }
    }
}
