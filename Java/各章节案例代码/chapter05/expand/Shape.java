/**
 * ����ͼ�εĳ�����
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public abstract class Shape {
	
	public int x;

	public int y;

	public Shape() {

	}

	/**
	 * @param x
	 * @param y
	 */
	public Shape(int x, int y) {
		super();
		this.x = x;
		this.y = y;
	}

	/**
	 * ��һ��ͼ��
	 */
	public abstract void draw();

	/**
	 * ���ͼ�ε����
	 * @return
	 */
	public abstract double getArea();
}
