import java.util.*;
class student{String sname;
	 int sno;
	student(int no,String name)
	{	  sno=no;
		sname=name;
	}
	void disps(){
	System.out.println("name>>>" +sname);
	System.out.println("roll no>>>" +sno);
	}
}
class marks extends student{
	int marks1;
	int marks2;
	marks(int no,String name,int m1,int m2)
	{
	    super(no,name);     
	    marks1=m1;
	    marks2=m2;	
	}
	void dispm()
	{
	System.out.println("MARKS1>>>" +marks1);
	System.out.println("MARKS2>>>" +marks2);
	}	
}
class Exp9 extends marks{
	int total;
	 Exp9(int no,String name,int m1,int m2)
		{
	 	super(no,name,m1,m2);
		 total=m1+m2; 
		}
	void dispe(){
	System.out.println("TOTAL OF THE MARKS>>>" +total);
		}
	
	public static void main(String args[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter the name of the student");
	String a=sc.nextLine();
	System.out.println("Enter the roll no. of the student");
	int r=sc.nextInt();
	System.out.println("Enter the marks 1 of the student");
	int q=sc.nextInt();
	System.out.println("Enter the marks 2 of the student");
	int s=sc.nextInt();
	Exp9 f= new Exp9(r,a,q,s);
	f.disps();
	f.dispm();
	f.dispe();
	}
}