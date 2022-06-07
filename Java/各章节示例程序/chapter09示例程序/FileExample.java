import java.io.*;
import java.text.SimpleDateFormat;

public class FileExample {
		
	public void fileInfo(File f) throws IOException{
		// ȡ���ļ���
		System.out.println("�ļ�����"+f.getName());
		// �����ļ��Ƿ���Ա���ȡ
		System.out.println("�ļ��Ƿ�ɱ���ȡ��"+(f.canRead()?"��":"��"));
		// �����ļ��Ƿ���Ա��޸�
		System.out.println("�ļ��Ƿ�ɱ��޸ģ�"+(f.canWrite()?"��":"��"));
		// ȡ���ļ�����·��
		System.out.println("�ļ��ľ���·����"+f.getAbsolutePath());
		// ȡ���ļ����ȣ����ֽ�Ϊ��λ
		System.out.println("�ļ����ȣ�"+f.length()+"�ֽ�");
		// lastModified()�������ش�1970��1��1����ĺ������������ʽ�������
		SimpleDateFormat sdf=new SimpleDateFormat("yyyy-MM-dd hh:mm:ss");
        System.out.println("�ļ�����޸�ʱ�䣺"+sdf.format(f.lastModified()));
	}
	
	public void dirInfo(File f) throws IOException{
		System.out.println("Ŀ¼����"+f.getName());
		// �õ�һ���ַ������飬������Ŀ¼�µ���Ŀ¼���ļ�
		System.out.println("��Ŀ¼�°���������Ŀ¼���ļ���");
		String [] dirArr = f.list();
		for(int i = 0; i < dirArr.length; i++){
			System.out.println("  "+ (i+1) + ":" + dirArr[i]);
		}
	}
	
	public static void main(String [] args) throws IOException {
		if(args.length <= 0){
			System.out.println("��ͨ�������в���ָ���ļ���Ŀ¼����");
			System.exit(0);
		}else {
			File file = new File(args[0]);
			if(file.isFile()){
				new FileExample().fileInfo(file);
			} else if(file.isDirectory()){
				new FileExample().dirInfo(file);
			} else {
				// ����һ�����ļ�
				file.createNewFile();
			}
		}		
	}
}