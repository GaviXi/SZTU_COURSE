package chapter11;

import java.awt.BorderLayout;
import java.awt.Container;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;
import java.io.IOException;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JPasswordField;
import javax.swing.JScrollPane;
import javax.swing.JTextField;

public class RegistFrame extends JFrame {
	private JTextField userText;

	private JPasswordField password;

	private JPasswordField repassword;

	private JLabel tip;

	
	private UserDataClient userDataClient;
	
	
	public RegistFrame() throws IOException {
		this.setTitle("�û�ע��");// ����ע�ᴰ�ڱ���
		
		userDataClient=new UserDataClient();
		
		Container container = this.getContentPane();
		container.setLayout(new BorderLayout());// ��������������border����
		JPanel registPanel = new JPanel();
		JLabel userLabel = new JLabel("�û��ʺţ�");
		JLabel passwordLabel = new JLabel("�û����룺");
		JLabel repasswordLabel = new JLabel("�ظ����룺");
		userText = new JTextField(15);
		password = new JPasswordField(15);
		repassword = new JPasswordField(15);
		JButton regist = new JButton("ע��");
		JButton exitButton = new JButton("�˳�");
		registPanel.add(userLabel);
		registPanel.add(new JScrollPane(userText));
		registPanel.add(passwordLabel);
		registPanel.add(new JScrollPane(password));
		registPanel.add(repasswordLabel);
		registPanel.add(new JScrollPane(repassword));
		registPanel.add(regist);
		registPanel.add(exitButton);

		setResizable(false);// ���ô��ڴ�С���ɱ�
		setSize(260, 180);
		setLocation(300, 100);
		JPanel tipPanel = new JPanel();
		tip = new JLabel();// ������ʾ��ʾ��Ϣ
		tipPanel.add(tip);

		container.add(BorderLayout.CENTER, registPanel);
		container.add(BorderLayout.NORTH, tip);

		exitButton.addActionListener(new ExitActionListener()); // �˳���ť��Ӽ���
		regist.addActionListener(new RegistActionListener()); // ע�ᰴť��Ӽ���
		this.addWindowListener(new WindowCloser()); // ���ڹرյļ���
	}

	/**
	 * �˳���ť�¼�����
	 * 
	 * @author Administrator
	 * 
	 */
	class ExitActionListener implements ActionListener {

		public void actionPerformed(ActionEvent event) {
			setVisible(false);
			dispose();
		}
	}

	/**
	 * ע�ᰴť�¼�����
	 * 
	 * @author Administrator
	 * 
	 */
	class RegistActionListener implements ActionListener {

		public void actionPerformed(ActionEvent arg0) {
			// �û�ע�����
			boolean bo =userDataClient.addUser(userText.getText(), new String(password.getPassword()));
			if (bo) {
				tip.setText("ע��ɹ���");
			} else {
				tip.setText("�û����Ѵ��ڣ�");
			}
		}

	}

	/**
	 * "�رմ���"�¼������ڲ���
	 * 
	 * @author Administrator
	 * 
	 */
	class WindowCloser extends WindowAdapter {

		public void windowClosing(WindowEvent e) {
			setVisible(false);
			dispose();
		}
	}

}
