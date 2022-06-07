import java.io.*; 
import java.util.*; 

public class RandomAccessFileExam { 
    public static void main(String[] args) { 
        Student[] students = { 
            new Student("Tom",   90), 
            new Student("Rose",  95), 
            new Student("Jerry", 88), 
            new Student("Jack",  84)
        }; 
        try { 
            File file = new File(args[0]); 
            // �Զ�дģʽ����RandomAccessFile����
            RandomAccessFile randomAccessFile = 
                new RandomAccessFile(file, "rw"); 
            for(int i=0; i<students.length; i++) { 
                // д������ 
                randomAccessFile.writeChars(students[i].getName()); 
                randomAccessFile.writeInt(students[i].getScore()); 
            } 
            Scanner scanner = new Scanner(System.in); 
            System.out.print("��ȡ�ڼ���ѧ����¼��"); 
            
            int num = scanner.nextInt(); 
            // ʹ��seek()����������ȡλ�� 
            randomAccessFile.seek((num-1) * Student.size()); 
            Student student = new Student(); 
            // �������� 
            student.setName(readName(randomAccessFile)); 
            student.setScore(randomAccessFile.readInt()); 
            System.out.println("������" + student.getName()); 
            System.out.println("������" + student.getScore()); 
            // �ر��ļ� 
            randomAccessFile.close(); 
        } catch(ArrayIndexOutOfBoundsException e) { 
            System.out.println("��ָ���ļ�����"); 
        } catch(IOException e) { 
            e.printStackTrace(); 
        } 
    }
     
    private static String readName(RandomAccessFile randomAccessfile) 
        throws IOException { 
        char[] name = new char[15]; 
        for(int i = 0; i < name.length; i++){
            name[i] = randomAccessfile.readChar(); 
        }
        // �����ַ�ȡ��Ϊ�ո�������� 
        return new String(name).replace('\0', ' '); 
    } 
} 
