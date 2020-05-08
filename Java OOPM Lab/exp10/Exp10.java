import java.util.*;
abstract class ab{
	abstract void area(int s);
	abstract void area(int l,int b);
	abstract void area(double r);
}
class FindArea extends ab{
	void area(int s)
	{
		int a=s*s;
		System.out.println("THE AREA OF SQUARE :"+a);		
	}
	void area(int l,int b)
	{
		int o=l*b;
		System.out.println("THE AREA OF RECTANGLE :"+o);			
	}
	void area(double r)
	{
		double t=3.14*r*r;
		System.out.println("THE AREA OF CIRCLE :"+t);		
	}


}
class Exp10{
		public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		System.out.println("ENTER THE SIDE OF THE SQUARE");
		int s=sc.nextInt();
		System.out.println("ENTER THE LENGTH AND BREADTH OF THE RECTANGLE");
		int l=sc.nextInt();
		int b=sc.nextInt();
		System.out.println("ENTER THE RADIUS OF THE CIRCLE");
		double r =sc.nextDouble();
		FindArea i =new FindArea();
		i.area(s);
		i.area(l,b);
		i.area(r);
}
}
