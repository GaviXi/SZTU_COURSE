package sample;

import java.awt.*;
import java.awt.event.WindowAdapter;
import java.awt.event.WindowEvent;

public class MyBorderLayout {
    Frame f;
    Button east, south, west, north, center;
    
     public static void main(String args[]) {
        MyBorderLayout mb = new MyBorderLayout();
        mb.go();
     }
     
     public void go() {
        f = new Frame("BorderLayout ��ʾ");
        f.addWindowListener(new WindowAdapter(){
            public void windowClosing(WindowEvent evt) {
                f.setVisible(false);
                f.dispose();
                System.exit(0);
            }
        });
        
        f.setBounds(0, 0, 300, 300);
        f.setLayout(new BorderLayout());
  
        north = new Button("��");
        south = new Button("��");
        east = new Button("��");
        west = new Button("��");
        center = new Button("��");
  
        f.add(BorderLayout.NORTH, north);
        f.add(BorderLayout.SOUTH, south);
        f.add(BorderLayout.EAST, east);
        f.add(BorderLayout.WEST, west);
        f.add(BorderLayout.CENTER, center);
  
        f.setVisible(true);
     }
}
