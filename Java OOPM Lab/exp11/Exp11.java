import java.util.*;
interface Areaa{
	 public void area();
}
interface Perii{
	public void peri();
}
class Calc implements  Areaa , Perii{
	Scanner sc=new Scanner(System.in);	
	public void area()
	{
		System.out.println("ENTER THE LENGTH OF RECT:");
		int l=sc.nextInt();
		System.out.println("ENTER THE BREADTH OF RECT:");
		int b=sc.nextInt();
		int q=l*b;
		System.out.println("AREA>>>>>"+q);
	}
	public void peri()
	{
		System.out.println("ENTER THE LENGTH OF RECT:");
		int l=sc.nextInt();
		System.out.println("ENTER THE BREADTH OF RECT:");
		int b=sc.nextInt();
		int o=2*(l+b);
		System.out.println("PERIMETER>>>>>"+o);
	}
}
class Exp11{
	public static void main(String args[]){
	Areaa w;
	Perii e;
	Calc c=new Calc();
	c.area();
	c.peri();
}
}
