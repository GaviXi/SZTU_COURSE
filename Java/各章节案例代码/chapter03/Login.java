/**
 * ģ���û���½�İ���
 */
package chapter03;

/**
 * @author ascent
 * @version 1.0
 */
public class Login{

	String[] userDB = new String[] { "admin^123", "liu^456", "ascent^789" };// ģ���̨���ݿ⣬���ݸ�ʽ���û���^����

	/**
	 * �����û���½��֤
	 * @param username
	 * @param password
	 */
	public void login(String username, String password) {
		for (int i = 0; i < userDB.length; i++) {
			byte[] b = userDB[i].getBytes();
			String u = "";
			String p = "";
			for (int j = 0; j < b.length; j++) {
				if ('^' == b[j]) {
					u = userDB[i].substring(0, j);
					p = userDB[i].substring(j + 1, userDB[i].length());
					break;
				}
			}
			if (u.equals(username) && p.equals(password)) {
				System.out.println("�û���¼�ɹ���");
				return;
			} else {
				if (i == userDB.length - 1) {
					System.out.println("�û������������");
				}
			}
		}
	}

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		String username = "admin";
		String password = "123";
		Login l = new Login();
		l.login(username, password);
	}
}
