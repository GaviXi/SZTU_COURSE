/**
 *һ���򵥵�Java��ʾ����
 */
package sample; // ��һ����step 1��
import java.io.*; // �ڶ�����step 2��
public class FirstJavaProgram { //��������step 3��

       //���ݲ��֣�Data or Fields�������Ĳ���step 4��
        private String name;
        private int age;
        
        /* �������֣�Methods�������岽��step 5��
        һ�����ⷽ���������췽��/������constructor��*/
        public FirstJavaProgram(String aName, int aAge){
           name = aName;
           age = aAge;
        }
        //���ݶ�ȡ������Accessor Method��
        public String getName() { return name;}

        public void setName(String aName){
            name = aName;
        }        

        //������ڷ�����Main Method��        
        public static void main(String[] args) {
       //�������󣬵�������step 6��
       FirstJavaProgram fjp = new FirstJavaProgram("Zhang", 24);
            System.out.println("Name is: " + fjp.getName()); } 
 }
