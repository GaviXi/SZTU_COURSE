class Example6_3{
   public static void main( String args[] ) {
      String s1 = "hello there";
      char charArray[] = new char[ 5 ];
      System.out.println("s1: " + s1); 
      System.out.println("\nLength of s1: " + s1.length());//����String���length����
      System.out.print("\nThe string reversed is: ");
      for ( int count = s1.length() - 1; count >= 0; count-- )
        System.out.print(s1.charAt( count ) + " ");	//����String���charAt����
      s1.getChars( 0, 5, charArray, 0 );//����String���getChars����
      System.out.print("\nThe character array is: ");
      for ( int count = 0; count < charArray.length; count++ )
         System.out.print(charArray[ count ]);
         System.out.println();
  }
}