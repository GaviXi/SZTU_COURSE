package sample;
import java.sql.*;

public class JDBCExam {
  public static void main(String[] args) {
    try {
           //ע������
           Class.forName("org.gjt.mm.mysql.Driver");
           //�����ݿ⽨������
           Connection con = DriverManager.getConnection("jdbc:mysql://localhost:3306/test","root","");
           //����SQL���
           PreparedStatement pstm = con.prepareStatement("insert into mytable(sex,name, age) values( ?,?,?)");
           //ִ��SQL��������
           for(int i = 0; i < 10; i++) {
               pstm.setString(1,  "female");
               pstm.setString(2, "name"+i);
               pstm.setInt(3,  i);
               pstm.executeUpdate();  
           }
           //�ر����ӣ��ͷ���Դ
           pstm.close();
           con.close();
           System.out.println("Information was inserted into table ");
       }catch(SQLException e) {
            System.out.println("Inserting  failed");
            e.printStackTrace(System.out);
            System.out.println("ErrorCode is: "+e.getErrorCode());
            System.out.println("SQLState is: "+ e.getSQLState());
       } catch(Exception e) {
             e.printStackTrace(System.out);
       }
   }
}
