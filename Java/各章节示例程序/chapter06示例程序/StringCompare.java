class StringCompare {
   public static void main( String args[] ){
      String s1 = new String( "hello" ); 
      String s2 = "goodbye";
      String s3 = "Happy Birthday";
      String s4 = "happy birthday";
      System.out.println("s1 = " + s1 + "\ns2 = " + s2 + "\ns3 = " + s3 + 
         "\ns4 = " + s4 + "\n");
      if ( s1.equals( "hello" ) )  	//����String���equals�����ж��ַ����Ƿ����
         System.out.println("s1 equals \"hello\"\n");
      else
         System.out.println("s1 does not equal \"hello\"\n"); 
      //����String���equalsIgnoreCase����
      //�ڲ����ִ�Сд��������ж����ַ����Ƿ����
      if ( s3.equalsIgnoreCase( s4 ) ) 	
         System.out.println("s3 equals s4\n");
      else
         System.out.println("s3 does not equal s4\n");
	  //����String���compareTo�����������ַ����Ĵ�С�Ƚ�
      System.out.println("s1.compareTo( s2 ) is " + s1.compareTo( s2 ) +
         "\ns2.compareTo( s1 ) is " + s2.compareTo( s1 ) +
         "\ns1.compareTo( s1 ) is " + s1.compareTo( s1 ) +
         "\ns3.compareTo( s4 ) is " + s3.compareTo( s4 ) +
         "\ns4.compareTo( s3 ) is " + s4.compareTo( s3 ) + "\n");
      
   }
}
