package sample;

interface Cook{
  void makeFood();	
}

public class LambdaExpressionTest {

     public static void main(String[] args) {
         //�ڲ��෽��
         invokeCook(new Cook() {
             @Override
             public void makeFood() {
                 System.out.println("������ʳ��");
             }
         });
         System.out.println("===========");
         //ʹ��lambda���ʽ
         invokeCook(()->{
             System.out.println("������ʳ��");
         });
     }
     public static void invokeCook(Cook cook){
         cook.makeFood();
     }
 
}
