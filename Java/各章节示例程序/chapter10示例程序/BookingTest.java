class BookingClerk {
	int remainder = 10;
	// synchronized void booking(int num){
	void booking(int num){
	if(num <= remainder){
		System.out.println("Ԥ��"+num+"��Ʊ"); 
		try{
			Thread.sleep(1000);
			remainder = remainder - num;
		} catch(InterruptedException e){
			remainder = remainder - num;
		}
	} else {
		System.out.println("ʣ��Ʊ���㣬�޷�����Ԥ��");
	}
	System.out.println("��ʣ"+remainder+"��Ʊ");
}
}

public class BookingTest implements Runnable{
	BookingClerk bt;
	int num;
	BookingTest(BookingClerk bt, int num){
		this.bt = bt;
		this.num = num;
		new Thread(this).start();
	}
	
	public void run(){
		bt.booking(num);
	}
	
	public static void main(String [] args){
		BookingClerk bt = new BookingClerk();
		new BookingTest(bt, 7);
		new BookingTest(bt,5);
	}
}