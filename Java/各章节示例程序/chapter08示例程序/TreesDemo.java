package sample;
import java.awt.*;
  import java.awt.event.*;
  import javax.swing.*;
  import javax.swing.tree.*;
  class Branch{
     DefaultMutableTreeNode r; 
//DefaultMutableTreeNode���������ݽṹ�е�ͨ�ýڵ�,�ڵ�Ҳ�����ж���ӽڵ㡣
    public Branch(String[] data){
       r=new DefaultMutableTreeNode(data[0]);
       for(int i=1;i<data.length;i++)
       r.add(new DefaultMutableTreeNode(data[i])); 
        //���ڵ�r��Ӷ���ӽڵ�
    }
    public DefaultMutableTreeNode node(){//���ؽڵ�
       return r;
    }
  }
  public class TreesDemo extends JPanel{
    String [][]data={
            {"Colors","Red","Blue","Green"},
            {"Flavors","Tart","Sweet","Bland"},
            {"Length","Short","Medium","Long"},
            {"Volume","High","Medium","Low"},
            {"Temperature","High","Medium","Low"},
            {"Intensity","High","Medium","Low"}
            };
    static int i=0; //i����ͳ�ư�ť����Ĵ���
    DefaultMutableTreeNode root,child,chosen;
    JTree tree;
    DefaultTreeModel model;
    public TreesDemo(){
       setLayout(new BorderLayout());
       root=new DefaultMutableTreeNode("root"); //���ڵ���г�ʼ��
       tree=new JTree(root); //�����г�ʼ������������Դ��root����
       add(new JScrollPane(tree)); //�ѹ��������ӵ�Trees��
       model=(DefaultTreeModel)tree.getModel(); //������ݶ���DefaultTreeModel
       JButton test=new JButton("Press me"); //��ťtest���г�ʼ��
       test.addActionListener(new ActionListener(){ //��ťtestע�������
          public void actionPerformed(ActionEvent e){
          if (i<data.length){ //��ťtest����Ĵ���С��data�ĳ���
              child=new Branch(data[i++]).node(); //�����ӽڵ�
              chosen=(DefaultMutableTreeNode) //ѡ��child�ĸ��ڵ�
              tree.getLastSelectedPathComponent();
              if(chosen==null){
              	chosen=root;
              } 
              model.insertNodeInto(child,chosen,0); //��child��ӵ�chosen
          }
       }
    });
    test.setBackground(Color.blue); //��ťtest���ñ���ɫΪ��ɫ
    test.setForeground(Color.white); //��ťtest����ǰ��ɫΪ��ɫ
    JPanel p=new JPanel(); //���p��ʼ��
    p.add(test); //�Ѱ�ť��ӵ����p��
    add(p,BorderLayout.SOUTH); //�����p��ӵ�Trees��
  }
  public static void main(String args[]){
    JFrame jf=new JFrame("JTree demo");
    //��Trees������ӵ�JFrame���������
    jf.getContentPane().add(new TreesDemo(), BorderLayout.CENTER);  
    jf.setSize(200,500);
    jf.setVisible(true);
  }
 }
