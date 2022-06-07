public class Student { 
	private String name; 
	private int score; 
	public Student() { 
		setName("noname"); 
	} 
	public Student(String name, int score) { 
		setName(name); 
		this.score = score; 
	} 
	public void setName(String name) { 
		StringBuilder builder = null; 
		if(name != null){
			builder = new StringBuilder(name); 
		} else{
			builder = new StringBuilder(15); 
		}  
		builder.setLength(15); // � 15 �ַ� 
		this.name = builder.toString(); 
	} 
	
	public void setScore(int score) { 
		this.score = score; 
	} 
	public String getName() { 
		return name; 
	} 
	public int getScore() { 
		return score; 
	} 
	// ÿ�����ݹ̶�д��34�ֽ� 
	public static int size() { 
		return 34; 
	} 
} 
