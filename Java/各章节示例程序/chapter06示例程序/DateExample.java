import java.util.Date;
class DateExample {
  public static void main(String args[]) {
    //����Date����
    Date date = new Date();
    //��ʾ����ǰ���ڵ��ַ���
    System.out.println(date);
    //��ʾ����ǰ���ڵ�����
    long msec = date.getTime();
    System.out.println("Milliseconds since Jan. 1, 1970 GMT = " + msec);
  }
}
