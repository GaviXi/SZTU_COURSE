package sample;
public class TestExtend extends Employee
{
	public static void main(String[] args) 
	{
	   System.out.println("���ǵķ������ã�" + getSalary("��һ",500));
        System.out.println("�̳еķ������ã�" + getSalary2("��һ",500));
        System.out.println("���ǵķ������ã�" + getSalary("����",10000));
        System.out.println("�̳еķ������ã�" + getSalary2("����",10000));
       }
    public static String getSalary(String name, int salary)
   {
	 String str;
	   if (salary>5000)
		 str = "����: " + name + "    Salary: " + salary;
	   else
		  str = "����: " + name + "    Salary: ����5000";
	   return str;
     }
};
class Employee 
{
	public String name;//����
	public int salary;//нˮ
	public static String getSalary(String name, int salary) 
	{
		String str;
		str = "����: " + name + "    Salary: " + salary;
		return str;
}
public static String getSalary2(String name, int salary) 
{
	String str;
	str = "����: " + name + "    Salary: " + salary;
   return str;
 }
}
