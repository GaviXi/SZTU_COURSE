package chapter10;

import java.net.Socket;

/**
 * �������socket���ӵĴ����� ���磺
 * <pre>
 * Handler aHandler = new Handler(clientSocket, myProductDataAccessor);
 * aHandler.start();
 * </pre>
 * @author ascent
 * @version 1.0
 */
public class Handler extends Thread {

	protected Socket clientSocket;

	private int opCode;

	protected boolean done;

	public Handler() {
	}

	public void run() {

		try {
			while (!done) {

				log("�ȴ�����...");

				switch (opCode) {
				case ProtocolPort.OP_GET_PRODUCT_CATEGORIES:
					opGetProductCategories();
					break;
				case ProtocolPort.OP_GET_PRODUCTS:
					opGetProducts();
					break;
				case ProtocolPort.OP_GET_USERS:
					opGetUsers();
					break;
				case ProtocolPort.OP_ADD_USERS:
					opAddUser();
					break;
				default:
					System.out.println("�������");
				}
			}
		} catch (Exception exc) {
			log(exc);
		}
	}

	private void opGetUsers() {
		System.out.println("����û�����Ϣ��");
	}

	protected void opGetProductCategories() {
		System.out.println("��������ò�Ʒ����Ϣ��");
	}

	protected void opGetProducts() {
		System.out.println("������в�Ʒ����Ϣ��");
	}

	public void opAddUser() {
		System.out.println("����û�����Ϣ��");
	}

	public void setDone(boolean flag) {
		done = flag;
	}

	protected void log(Object msg) {
		System.out.println("������: " + msg);
	}
}
