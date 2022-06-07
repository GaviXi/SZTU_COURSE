 class FinallyExample {
  static void method(int i) {
	 try {
	  if(i == 2) {
		 System.out.println("��2������� �������������쳣");
		 throw new ArithmeticException();
	  } if(i == 3) {
		 System.out.println("��3������� �������ָ�ʽ�쳣");
		 throw new NumberFormatException();
	  } if(i == 4) {
		 System.out.println("��4������� ���������±�Խ���쳣");
		 throw new ArrayIndexOutOfBoundsException();
	  }
	  System.out.println("��1������� û�з����쳣");
	 } catch(ArithmeticException e) {
	  System.out.println("�쳣����׽�����");
	 } catch(ArrayIndexOutOfBoundsException e) {
	  System.out.println("�쳣����׽�����ֱ���������");
	  throw e; 
	 } finally {
	  System.out.println("����finally�Ӿ�");
	 }
	 System.out.println("����try����Ĵ���");
	  }
  public static void main(String args[]) {
	 for(int i = 1; i < 5; i++) {
	  try {
	    method (i);
	  } catch(RuntimeException e){
	    System.out.println("��main������׽���쳣");
	  }
	 }
  }
 }
