package chapter09;

import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;
import java.io.RandomAccessFile;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.StringTokenizer;

import chapter04.User;


/**
 * ��Ʒ���ݶ�ȡ��ʵ����
 * @author ascent
 * @version 1.0
 */
public class ProductDataAccessor {
	// ////////////////////////////////////////////////////
	//
	// �û��ļ���ʽ����
	// �û��ʺ�,�û�����,Ȩ��
	// ----------------------------
	//
	protected static final String USER_FILE_NAME = "user.db";
	private HashMap userTable;
	public HashMap getUserTable() {
		return this.userTable;
	}

	/**
	 * Ĭ�Ϲ��췽��
	 * 
	 */
	public ProductDataAccessor() {
		load();
	}

	/**
	 * ��ȡ���ݵķ���
	 */
	public void load() {
		userTable = new HashMap();
		ArrayList productArrayList = null;
		StringTokenizer st = null;
		User userObject;
		String line = "";
		String userName, password, authority;
		try {
			line = "";
			log("��ȡ�ļ�: " + USER_FILE_NAME + "...");
			BufferedReader inputFromFile2 = new BufferedReader(new FileReader(
					USER_FILE_NAME));
			while ((line = inputFromFile2.readLine()) != null) {
				st = new StringTokenizer(line, ",");
				userName = st.nextToken().trim();
				password = st.nextToken().trim();
				authority = st.nextToken().trim();
				userObject = new User(userName, password, Integer
						.parseInt(authority));

				if (!userTable.containsKey(userName)) {
					userTable.put(userName, userObject);
				}
			}
			inputFromFile2.close();
			log("�ļ���ȡ����!");
			log("׼������!\n");
		} catch (FileNotFoundException exc) {
			log("û���ҵ��ļ� \"" + USER_FILE_NAME + "\".");
			log(exc);
		} catch (IOException exc) {
			log("�����쳣: " + USER_FILE_NAME);
			log(exc);
		}
	}

	/**
	 * ��������
	 */
	public void save(User user) {
		log("��ȡ�ļ�: " + USER_FILE_NAME + "...");
		try {
			String userinfo = user.getUsername() + "," + user.getPassword()
					+ "," + user.getAuthority();
			RandomAccessFile fos = new RandomAccessFile(USER_FILE_NAME, "rws");
			fos.seek(fos.length());
			fos.write(("\n" + userinfo).getBytes());
			fos.close();
		} catch (FileNotFoundException e) {
			e.printStackTrace();
		} catch (IOException e) {
			e.printStackTrace();
		}
	}

	/**
	 * ��־����.
	 */
	protected void log(Object msg) {
		System.out.println("ProductDataAccessor��: " + msg);
	}

	public HashMap getUsers() {
		this.load();
		return this.userTable;
	}
}
