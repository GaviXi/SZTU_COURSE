package sample;
public class SwitchTest {
    
	public void judge(int score){
        int k;
        k=score/10;
        if (score>100||score<0)
         System.out.println("\n������������\n");
        else{
          switch (k)
          {  
                 case 10:
                 case  9 :System.out.println("�ɼ���A");break;
                 case  8 :System.out.println("�ɼ���B");break;
                 case  7: System.out.println("�ɼ���C");break;
                 case  6: System.out.println("�ɼ���D");break; 
                 case  5:
     			 case  4:
    			 case  3:
                 case  2:
       		     case  1:
       		     case  0: System.out.println("�ɼ���E"); break;
                 default: System.out.println("\n������������\n");
          }        
        }
    }
	
	public static void main(String args[]){       
		SwitchTest st = new SwitchTest();
		st.judge(87);
	}
 }