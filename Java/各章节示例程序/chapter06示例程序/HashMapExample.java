import java.util.*;
public class HashMapExample{
	public static void main(String[] args){
		//������HashMap����
		HashMap hm=new HashMap();
		//��HashMap������������ݲ�ͬ�ļ�ֵ��
		hm.put(1,"A");
		hm.put(3,"B");
		hm.put(4,"C");
		hm.put(2,"D");
		hm.put(5,"E");
		System.out.println("���Ԫ�غ�Ľ��Ϊ�� ");
		System.out.println(hm);
		//�Ƴ���HashMap�����м�Ϊ97001��ֵ
		hm.remove(3);
		//�滻��ֵ97002��Ӧ��ֵ
		hm.put(4,"F");
		//��ӡ���HashMap[�е�����
		System.out.print("ɾ�����滻Ԫ�غ���Ϊ��");
		System.out.println(hm);
		//ȡ��ָ������Ӧ��ֵ
		Object o=hm.get(2);//ʹ�����Զ��������
		String s=(String)o;
		System.out.println("��2��Ӧ��ֵΪ��"+s);
		}
}
