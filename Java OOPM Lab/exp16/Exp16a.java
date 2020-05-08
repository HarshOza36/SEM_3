import java.util.*;
import java.awt.*;
class Exp16a extends Frame{
	Label name,rollno;
	TextField t1,t2;
	Button b;
	Exp16a()
	{	name= new Label("NAME:");
		rollno= new Label("Roll NO:");
		t1= new TextField(200);
		t2= new TextField(200);
		b= new Button("SUBMIT");
		add(name);
		add(rollno);
		add(t1);
		add(t2);
		add(b);
		name.setBounds(30,100,80,30);
		rollno.setBounds(30,200,80,30);
		b.setBounds(150,300,100,40);
		t1.setBounds(150,100,100,50);
		t2.setBounds(150,200,100,50);
		setSize(400,400);
		setLayout(null);
		setVisible(true);
	}
	public static void main(String a[]){
	Exp16a obj=new Exp16a();
	}	
}
