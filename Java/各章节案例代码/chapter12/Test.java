package chapter12;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;

public class Test {

	public static Connection getConnection() {
		try {
			Class.forName("com.mysql.jdbc.Driver");// ע������
			return DriverManager.getConnection("jdbc:mysql://localhost:3306/asys?user=root&password=");// ������
		} catch (ClassNotFoundException e) {
			e.printStackTrace();
		} catch (SQLException e) {
			e.printStackTrace();
		}
		return null;
	}

	public static void findAllUser() {
		Connection conn = Test.getConnection();
		try {
			PreparedStatement pst = conn.prepareStatement("select * from user");// ����һ��Statement
			ResultSet rs = pst.executeQuery();// ִ��sql���
			while (rs.next()) {
				String username = rs.getString("username");
				String password = rs.getString("password");
				System.out.println(username + "    " + password);
			}
		} catch (SQLException e) {
			e.printStackTrace();
		}
	}

	public static void main(String[] args) {
		Test.findAllUser();
	}
}
