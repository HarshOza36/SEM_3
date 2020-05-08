import java.io.*;
import java.util.*;
class Exp8b{
	public static void main(String args[])
	{
	   Scanner sc= new Scanner(System.in);
	   System.out.println("Enter the string");
	   String str=sc.nextLine();
	   StringBuffer s1=new StringBuffer(str);
	   StringBuffer s2=new StringBuffer(str);   
	   s1.reverse();
	   System.out.println("REVERSE IS >>" +s1);
	   if(String.valueOf(s1).compareTo(String.valueOf(s2))==0)
	   System.out.println("PALINDROME!!!!!!");
	   else
	   System.out.println("NOT PALINDROME!!!!!!");		
	}
}