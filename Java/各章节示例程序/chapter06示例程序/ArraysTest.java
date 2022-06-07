package sample;
import java.util.Arrays;
public class ArraysTest {
	public static void main(String args[]) {
		int[] a1 = new int[] { 1, 2, 3, 4 };
		int[] a2 = new int[] { 1, 2, 3, 4 };
		// 1���ȽϷ���
		System.out.println("a1==a2?:" + Arrays.equals(a1, a2));// �Ƚ�����Ԫ��
		// 2�����Ʒ���copyOf��copyOfRange
		int[] b1 = Arrays.copyOf(a1, 5);// ����a1���飬����������b��δ��ֵ��Ԫ�غ��油0
		int[] b2 = Arrays.copyOfRange(a1, 2, 4);// �з�Χ����,ǰ�պ�
		// 3��toString����
		System.out.println("b1��" + Arrays.toString(b1));
		System.out.println("b2��" + Arrays.toString(b2));
		// 4����ֵ����fill
		Arrays.fill(b1, 0, 2, 5); // �з�Χ��ֵ����ʾ��[0,2)֮���Ԫ�ظ�ֵΪ5
		Arrays.fill(b2, 5); // ȫ����ֵ��b2����Ԫ�ظ�ֵΪ5
		System.out.println("�з�Χ��ֵ--b1��" + Arrays.toString(b1));
		System.out.println("ȫ����ֵ--b2��" + Arrays.toString(b2));
		// 5�����򷽷�sort��Ĭ������
		Arrays.sort(b1, 0, 4); // �з�Χ��������[0,4)֮���Ԫ��
		System.out.println("�з�Χ����--b1��" + Arrays.toString(b1));
		Arrays.sort(b1);// ȫ����
		System.out.println("ȫ����--b1��" + Arrays.toString(b1));
		// ��ѯ����binarySearch����������Ѿ����������У��������ֵ���򷵻ظ�ֵ���������ڣ����ظ���
		System.out.println(Arrays.binarySearch(b1, 4)); // ȫ������������������Ԫ��
		System.out.println(Arrays.binarySearch(b1, 0, 3, -13)); // �з�Χ����������������[0,3)֮���Ԫ��
	}
}
