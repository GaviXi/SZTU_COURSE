package chapter11;

import java.net.ServerSocket;
import java.net.Socket;

public class ProductDataServer implements ProtocolPort {

	protected ServerSocket myServerSocket;

	protected ProductDataAccessor myProductDataAccessor;

	protected boolean done;

	public ProductDataServer() {
		this(ProtocolPort.DEFAULT_PORT);
	}

	public ProductDataServer(int thePort) {

		try {
			done = false;
			log("���������� " + thePort);
			myServerSocket = new ServerSocket(thePort);
			myProductDataAccessor = new ProductDataAccessor();

			log("\n������׼������!");
			listenForConnections();
		} catch (Exception exc) {
			log(exc);
			System.exit(1);
		}
	}

	protected void listenForConnections() {
		Socket clientSocket = null;
		Handler aHandler = null;

		try {
			while (!done) {
				log("\n�ȴ�����...");
				clientSocket = myServerSocket.accept();

				String clientHostName = clientSocket.getInetAddress()
						.getHostName();

				log("�յ�����: " + clientHostName);
				aHandler = new Handler(clientSocket, myProductDataAccessor);
				aHandler.start();
			}
		} catch (Exception exc) {
			log("listenForConnections()�з����쳣:  " + exc);
		}
	}

	protected void log(Object msg) {
		System.out.println("ProductDataServer��: " + msg);
	}

	// �������� ����������
	public static void main(String[] args) {

		ProductDataServer myServer;

		if (args.length == 1) {
			int port = Integer.parseInt(args[0]);
			myServer = new ProductDataServer(port);
		} else {
			myServer = new ProductDataServer();
		}

	}

}