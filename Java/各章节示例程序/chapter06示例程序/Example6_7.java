package sample;
public class Example6_7 {
    public static void main(String args[]) {
        String s = " Hello, Java,  Stri\tng ";
        System.out.println("sԭʼֵ: " + s);
        System.out.println("�ж��ַ����Ƿ�Ϊ��:" + s.isBlank());
        System.out.println("ȥ����β�ո�:" + s.strip());
        System.out.println("ȥ��β�ո�:" + s.stripTrailing());
        System.out.println("ȥ���׿ո�:" + s.stripLeading());
        System.out.println("�ַ����ظ�:" + s.repeat(3));
        System.out.println("����ͳ��:" + s.lines().count());

    }
}