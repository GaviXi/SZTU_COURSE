interface Sittable
{
	void sit();
}
interface Lie
{
	void sleep();
}
interface HealthCare
{
	void massage();
}
class Chair implements Sittable
{
	public void sit(){};
}
/*interface Sofa extends Sittable,Lie    //�ӿڿ���ʵ�ֶ��ؼ̳У��ö��������
{
}*/
class Sofa extends Chair implements Lie,HealthCare//һ����ȿ��ԴӸ����м̳�ͬʱ�ֿ���ʵ�ֶ���ӿڡ�
{
	public void sleep(){};
	public void massage(){};
}
