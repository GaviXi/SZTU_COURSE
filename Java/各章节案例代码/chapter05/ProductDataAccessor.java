package chapter05;

import chapter04.User;

/**
 * ��Ʒ���ݶ�ȡ��ʵ����
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor extends DataAccessor {

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
		System.out.println("��д�ļ��ط���......");
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
