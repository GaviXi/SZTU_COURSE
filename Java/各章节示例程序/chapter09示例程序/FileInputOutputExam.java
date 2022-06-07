import java.io.*;
public class FileInputOutputExam{
	public static void main(String [] args){
		if(args.length != 2){
			System.out.println("��ָ��2��������Դ�ļ���Ŀ���ļ����ƣ�");
			System.exit(-1);
		}
		FileInputStream in = null;
		FileOutputStream out = null;
		try{
			in = new FileInputStream(args[0]);
		} catch(FileNotFoundException ex){
			System.out.println("�޷���Դ�ļ�����ļ������ڣ�");
			System.exit(-2);
		}
		try{
			out = new FileOutputStream(args[1]);
		}catch(FileNotFoundException ex){
			System.out.println("�޷���Ŀ���ļ�����ļ��޷�������");
			System.exit(-3);
		}
		int c;
		try{
			while( (c=in.read()) != -1){
				out.write(c);
			}
			in.close();
			out.close();
		} catch(IOException ioEx){
			ioEx.printStackTrace();
		}
	}
}