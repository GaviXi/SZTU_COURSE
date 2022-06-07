package chapter06;

import java.util.HashMap;

import chapter04.User;

/**
 * ��������ඨ������ζ�ȡһ�������ļ��� 
 * ���ṩ�ķ�������������ò�Ʒ�ķ���;���Ĳ�Ʒ��Ϣ
 * @author ascent
 * @version 1.0
 */
public abstract class DataAccessor {

	/**
	 * ����û���Ϣ��HashMap/Hashtable .
	 */
	protected HashMap<String,User> userTable;
	
	/**
	 * Ĭ�Ϲ��췽��
	 */
	public DataAccessor() {
		userTable = new HashMap<String,User>();
	}

	/**
	 * ���ļ��ж�ȡ����
	 */
	public abstract void load();

	/**
	 * ���ļ��б�������
	 */
	public abstract void save(User user);

	/**
	 * ��ȡ�û�
	 * @return userTable Key:�û�����Value:�û�����
	 */
	public HashMap<String,User> getUsers() {
		return this.userTable;
	}
	
	/**
	 * ��־����
	 */
	protected void log(Object msg) {
		System.out.println("���ݴ�ȡ�ࡡData Accessor:  " + msg);
	}
}

