enum Day {
	MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY
}
public class EnumTest {
	public static void main(String[] args) {
		//// ����ö������
		Day[] days = new Day[] { Day.MONDAY, Day.TUESDAY, Day.WEDNESDAY,
				Day.THURSDAY, Day.FRIDAY, Day.SATURDAY, Day.SUNDAY };
		// ��ӡö�ٳ���������Լ�ö��ֵ
		for (int i = 0; i < days.length; i++) {
			System.out.println("day[" + days[i].ordinal() + "]:"
					+ days[i].name());
		}
		// ͨ��compareTo�����Ƚ�,ʵ�������ڲ���ͨ��ordinal()ֵ�Ƚϵ�
		System.out.println("day[1] VS day[2]:" + days[1].compareTo(days[2]));
	}
} 
