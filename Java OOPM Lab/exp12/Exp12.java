import java.util.*;
interface base{
void calArea();
void disp();
}
class circle implements base{
	Scanner sc=new Scanner(System.in);
	double r,ar;
	public void calArea(){
	System.out.println("Enter the radius of the circle");
	 r=sc.nextDouble();
	ar=3.14*r*r;
	}
	public void disp(){
	System.out.println("the area of the circle>>>"+ar);
	}}
class triangle implements base{
	Scanner sc=new Scanner(System.in);
	double b,h,arr;
	public void calArea(){
	System.out.println("Enter the height of the circle");
	 h=sc.nextDouble();
	System.out.println("Enter the base of the circle");
	 b=sc.nextDouble();
	arr=0.5*b*h;
	}
	public void disp(){
	System.out.println("the area of the triangle>>>"+arr);
	}}
class Exp12{
	public static void main(String a[]){
	Scanner sc=new Scanner(System.in);
	base b=null;
	System.out.println("MENU\n1.AREA OF CIRCLE...2.AREA OF TRIANGLE");
	System.out.println("Enter your choice");
	int ch=sc.nextInt();
	switch(ch){
	case 1:
	b=new circle();
	break;
	case 2:
	b=new triangle();
	break;
	default:
	System.out.println("INVALID CHOICE>>>");
	
}
	b.calArea();
	b.disp();
}
}