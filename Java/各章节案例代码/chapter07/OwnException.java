/**
 * �Զ����쳣��
 */
package chapter07;

/**
 * @author ascent
 * @version 1.0
 */
public class OwnException extends Exception {

	/**
	 * defult constructor
	 */
	public OwnException() {
		this("�����쳣��");
	}

	/**
	 * @param message
	 */
	public OwnException(String message) {
		super(message);
	}
}
