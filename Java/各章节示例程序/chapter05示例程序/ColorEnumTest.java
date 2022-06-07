package sample;

enum Color {
    RED("��ɫ", 1), 
    GREEN("��ɫ", 2), 
    WHITE("��ɫ", 3), 
    YELLOW("��ɫ", 4);
	// ��Ա����
	private String name;
	private int index;
	// ���췽��
	private Color(String name, int index) {
	  this.name = name;
	  this.index = index;
	}
	// ��ͨ����
	public static String getName(int index) {
	  for (Color c : Color.values()) {
	    if (c.getIndex() == index) {
	      return c.name;
	    }
	  }
	  return null;
	}
    // get set ����
	public String getName() {
	  return name;
	}
	public void setName(String name) {
	  this.name = name;
	}
	public int getIndex() {
	  return index;
	}
	public void setIndex(int index) {
	  this.index = index;
	}
	
	//���Ƿ���
	@Override
	public String toString() {
	  return this.index+"_"+this.name;
	}
	
}

public class ColorEnumTest {
	 public static void main(String[] args) {
		 String str = Color.getName(1);
         System.out.println("name=="+str);
         Color color = Color.valueOf("GREEN");
         System.out.println("valueOf=="+color);
        
	 }
}
