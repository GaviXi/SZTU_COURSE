public class OverrideTest {
	    String name;
	    @Override
	    public String toString(){//������OverrideTest�ĸ���Object��toString����
            return name;
	    }
	    @Override
	    public String fromString(){//����OverrideTest�ĸ���Objectû��fromString����
	        return name;
	    }
}
