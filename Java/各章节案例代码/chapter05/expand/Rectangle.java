/**
 * �������ε���
 */
package chapter05.expand;

/**
 * @author ascent
 * @version 1.0
 */
public class Rectangle extends Shape {
	
	public Rectangle(int x , int y ){
		super(x,y);		
	}

	@Override
	public void draw() {
		System.out.println("����һ��������...");

	}

	@Override
	public double getArea() {
		return x * y;
	}

}
