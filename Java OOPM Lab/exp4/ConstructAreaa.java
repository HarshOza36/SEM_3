import java.util.*;
class areac
{
	areac(int s)
	{
		double as=s*s;
		System.out.println("the area of square will be......" +as);
	}
	 areac(int l,int b)
	{
		double ar=l*b;
		System.out.println("the area of square will be......" +ar);
	}
}
class ConstructAreaa{
	public static void main(String[] args)
{
	Scanner sc= new Scanner(System.in);
	
	System.out.println("Enter the side for the square");
	int s=sc.nextInt();
	System.out.println("Enter the length for the rectangle");
	int l=sc.nextInt();
	System.out.println("Enter the breadth for the rectangle");
	int b=sc.nextInt();
	areac a1= new areac(s);
	areac a2=new areac(l,b);
	
           }
}