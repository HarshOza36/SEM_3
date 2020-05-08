import java.util.*;
class Box
{	int v,len,bre,dep;
	void setData(int l,int br,int d)
	{
		len=l;
		bre=br;
		dep=d;	
	}
	void volume(Box b)
	{
		v=len*bre*dep; 
	System.out.println("VOLUME WILL BE...................." +v);
	}
}
class Exp5_2b{
	public static void main(String[] args)
{
	Scanner sc= new Scanner(System.in);
	Box b=new Box();
	System.out.println("Enter the length for the box");
	int l=sc.nextInt();
	System.out.println("Enter the breadth for the box");
	int br=sc.nextInt();
	System.out.println("Enter the depth for the box");
	int d=sc.nextInt();
	b.setData(l,br,d);
	b.volume(b);
	
}
}