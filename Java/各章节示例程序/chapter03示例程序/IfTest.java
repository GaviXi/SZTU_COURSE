package sample;
public class IfTest {
    
	public void judge(int score){
		if (score>=60)   /*�ù�ϵ���ʽ�жϸóɼ��Ƿ����60��*/
		    System.out.println("The student's score is " + score + " and it has passed.\n");
		else
		    System.out.println("The student's score is " + score + " and it hasn't passed.\n");
	}

	public static void main(String args[]){
                          IfTest it = new IfTest();
                          it.judge(75);
                          it.judge(58);
	}
 }