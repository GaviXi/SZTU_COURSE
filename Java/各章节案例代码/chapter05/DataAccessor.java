package chapter05;

import chapter04.User;

/**
 * ��������ඨ������ζ�ȡһ�������ļ��� 
 * ���ṩ�ķ�������������ò�Ʒ�ķ���;���Ĳ�Ʒ��Ϣ
 * @author ascent
 * @version 1.0
 */
public abstract class DataAccessor {

	/**
	 * Ĭ�Ϲ��췽��
	 */
	public DataAccessor() {

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
	 * ��־����
	 */
	protected void log(Object msg) {
		System.out.println("���ݴ�ȡ�ࡡData Accessor:  " + msg);
	}
}

