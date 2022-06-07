package chapter11;

import java.io.Serializable;

public class User implements Serializable{

	private String username; // �û���

	private String password; // ����

	private int authority; // �û�Ȩ��

	/**
	 * Ĭ�Ϲ��췽��
	 */
	public User() {
	}

	public User(String username, String password) {
		this.username = username;
		this.password = password;
	}

	/**
	 * �����в������췽��
	 * @param username
	 * @param password
	 * @param authority
	 */
	public User(String username, String password, int authority) {
		this.username = username;
		this.password = password;
		this.authority = authority;
	}

	public int getAuthority() {
		return authority;
	}

	public void setAuthority(int authority) {
		this.authority = authority;
	}

	public String getUsername() {
		return username;
	}

	public void setUsername(String username) {
		this.username = username;
	}

	public String getPassword() {
		return password;
	}

	public void setPassword(String password) {
		this.password = password;
	}
	
	@Override
	public String toString() {
		return "�û�����"+this.getUsername() + "  ���룺" + this.getPassword();
	}
}
