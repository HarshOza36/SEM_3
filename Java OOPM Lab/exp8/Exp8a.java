import java.util.*;
class Exp8a{
	public static void main(String []args){
	//System.out.println("SFIT was established in 1999. SFIT has 3 UG programs and 2 PG program . SFIT is accredated by NBA,approved by AICTE and is affiliated to university of mumbai. SFIT is certified with quality management system standards .ISO 9001-1008 for providing under graduate course in engineering and technology");
	Scanner sc=new Scanner(System.in);
		int count=0; String s2=" ";
		System.out.println("Enter String : ");
		String s1=sc.nextLine();
		String a[]=s1.split(" ");
		for(int i=0;i<a.length;i++)
		{
			if(a[i].equals("SFIT"))
			count++;
			if(a[i].length()>s2.length())
			s2=a[i];
		}
		String h,b;
		h="SFIT"; b="St. Francis Institute of Technology";
		String c;
		c=s1.replace(h,b);
		c=c.replaceAll(s2,"*"+s2+"*");
		
		System.out.println("Count (SFIT) : "+count);
		System.out.println("Longest word : "+s2);
		System.out.println("New String : "+c);
}
}