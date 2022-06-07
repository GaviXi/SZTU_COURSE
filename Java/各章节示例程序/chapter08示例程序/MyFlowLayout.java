package sample;
import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class MyFlowLayout {
    private Frame f;
    private Button button1, button2, button3; 
    
    public static void main (String args[]) {
        MyFlowLayout mflow = new MyFlowLayout ();
        mflow.go();
    }
    
    public void go() {
        f = new Frame ("FlowLayoutЧ��");
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent evt) {
                f.setVisible(false);
                f.dispose();
                System.exit(0);
            }
        });
        //f.setLayout(new FlowLayout());
        f.setLayout(new FlowLayout(FlowLayout.LEADING, 20, 20));
        button1 = new Button("��һ����ť");
        button2 = new Button("�ڶ�����ť");
        button3 = new Button("��������ť");
        f.add(button1);
        f.add(button2);
        f.add(button3); 
        f.setSize (200,200);
        f.pack();
        f.setVisible(true);
  }
}
