import java.util.*;
class triaarea
{	
	Scanner sc=new Scanner(System.in);
	double Area()
	{
		System.out.println("enter the value for base");
		int b=sc.nextInt();
		System.out.println("enter the value for height");
		int h=sc.nextInt();
		double a=0.5*b*h;
		return(a);	
	}
}
class AreaTri
{	public static void main(String[] args){
	triaarea e=new triaarea();
	double a=e.Area();
	System.out.println("the area of the triangle is......" +a);
}
}