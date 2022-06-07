import java.io.*;

public class IOExample {
    public static void main(String [] args) 
    throws IOException {
    	
        // һ��һ�ж�������
        BufferedReader in = new BufferedReader(
        	new FileReader("IOExample.java"));
        String str;
        String str2 = new String();
        while((str=in.readLine ()) != null){
        	str2 = str2 + str + "\n"; 
        }
        in.close();
        
        // ���ڴ�����
        StringReader reader = new StringReader(str2);
        int outChar;
        while((outChar=reader.read()) != -1){
        	System.out.print((char)outChar);
        }
        
        // �ӱ�׼�����ȡ����
        BufferedReader stdIn = new BufferedReader(
        	new InputStreamReader(System.in));
        System.out.print("����һ�����ݣ�");
        System.out.println("��������ǣ�"+stdIn.readLine());
        
        // ������ļ�
        try {
        	BufferedReader sIn = new BufferedReader(
        		new StringReader(str2));
        	PrintWriter fileOut = new PrintWriter(
        		new BufferedWriter(new FileWriter("IOExample.out")));
        		int lineNo = 1;
        		while((str=sIn.readLine()) != null){
        			fileOut.println((lineNo++) + ":" + str);
        		}
        		fileOut.close();
        } catch(EOFException ex){
        	System.err.println("������ĩβ");
        }
    }
}