package chapter06;

import java.util.StringTokenizer;

import chapter04.User;

/**
 * ��Ʒ���ݶ�ȡ��ʵ����
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor extends DataAccessor {

	/**
	 * ģ�������ļ�user.db����
	 */
	String[] str = new String[]{"user1,123,0","user2,456,0","user3,123,0","user4,789,0"};
	
	/**
	 * Ĭ�Ϲ��췽��
	 */
	public ProductDataAccessor() {
		this.load();
	}

	/**
	 * ��ȡ���ݵķ���
	 */
	@Override
	public void load() {
		for (int i = 0; i < str.length; i++) {
			String s = str[i];
			
			StringTokenizer st = new StringTokenizer(s,",",false);
			String username = st.nextToken().trim();
			String password = st.nextToken().trim();
			String authority = st.nextToken().trim();
			User u = new User(username,password,Integer.parseInt(authority));
			userTable.put(username, u);
		}
	}

	/**
	 * ��������
	 */
	@Override
	public void save(User user) {
		System.out.println("��д�ı��淽��......");
	}

	/**
	 * ��־����.
	 */
	@Override
	protected void log(Object msg) {
		System.out.println("ProductDataAccessor��: " + msg);
	}

}
