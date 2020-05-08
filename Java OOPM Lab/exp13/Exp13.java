import java.util.*;
class InvalidDayException extends Exception{
	InvalidDayException (String str){
	System.out.println(str);
	}}
class Exp13{
	public static void main(String a[]){
	Scanner sc=new Scanner(System.in);
	System.out.println("Enter a VALID DAY");
	int d=sc.nextInt();
	try
	{	
		if(d<1 || d>31) throw new InvalidDayException("ENTER VALID DATE");
		else
		{	System.out.println("VALID DAY>>>"+d);
		}
	}
	catch(InvalidDayException e){
		System.out.println("NOT VALID>>");
	}
	finally
	{
		System.out.println("EXIT!!!!!!!!");
	}
}
}