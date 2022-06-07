public class GenericMe {                         
	public static <E> void genericMethods(E[] arrays) {
		// �������Ԫ�� < E >
		for (E array : arrays) {
			System.out.print(array + ",");
		}
	}

	public static void main(String args[]) {
		// ������ͬ���͵����飬Integer��String����
		Integer[] intArray = { 1, 2, 3, 4, 5 };
		String[] stringArray = { "one", "two", "three", "four", "five" };

		System.out.println("��������Ԫ��Ϊ:");
		genericMethods(intArray); // �����������

		System.out.println("\n�ַ���������Ԫ��Ϊ:");
		genericMethods(stringArray); // ����ַ���������
	}
}
