import java.util.*;
class areac
{
	double areacc(int s)
	{
		double as=s*s;
		return as;
	}
	double areacc(int l,int b)
	{
		double ar=l*b;
		return ar; 
	}
}
class MethodArea{
	public static void main(String[] args)
{
	Scanner sc= new Scanner(System.in);
	areac d=new areac();
	System.out.println("Enter the side for the square");
	int s=sc.nextInt();
	d.areacc(s);
	double as=d.areacc(s);
	System.out.println("the area of square will be......" +as);
	System.out.println("Enter the length for the rectangle");
	int l=sc.nextInt();
	System.out.println("Enter the breadth for the rectangle");
	int b=sc.nextInt();
	d.areacc(l,b);
	double ar=d.areacc(l,b);
	System.out.println("the area ofrectangle will be......" +ar);
}
}