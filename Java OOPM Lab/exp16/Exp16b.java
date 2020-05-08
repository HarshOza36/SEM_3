import java.awt.*;
import java.awt.event.*;
import javax.swing.*;
class Exp16b extends Frame implements ActionListener
{
	Label name,rollno,display;
	TextField t1,t2;
	Button b;
	public static void main(String args[])
	{
   	Exp16b o=new Exp16b();
	}
	Exp16b()
	{	name= new Label("NAME:");
		rollno= new Label("Roll NO:");
		display=new Label();
		t1= new TextField(200);
		t2= new TextField(200);
		b= new Button("SUBMIT");
		add(name);
		add(rollno);
		add(t1);
		add(t2);
		add(b);
   		add(display);
		name.setBounds(30,100,80,30);
		rollno.setBounds(30,200,80,30);
		b.setBounds(150,300,100,40);
		t1.setBounds(150,100,100,50);
		t2.setBounds(150,200,100,50);
                                   display.setBounds(30,370,150,30);
		b.addActionListener(this);
		setSize(500,500);
		setLayout(null);
		setVisible(true);
	}
	public void actionPerformed(ActionEvent ae)
	{	
	if(ae.getActionCommand().equals("SUBMIT"))
                 		{
		display.setText("HELLO  "+t1.getText());	
		display.setVisible(true);
		}
	}
}
