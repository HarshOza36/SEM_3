import java.util.*;
public class Exp7b{
	public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int a[][];
	int i,j;
	int flag=0; 
	a= new int[50][50];
	System.out.println("Enter the  rows elements for the array");
	int r=sc.nextInt();
	System.out.println("Enter the  column elements for the array");
	int c=sc.nextInt();
	System.out.println("Enter the  elements for the array");
	for(i=0;i<r;i++)
	{	for(j=0;j<c;j++)
		{a[i][j]=sc.nextInt();}
	}
	System.out.println("Elements are...........");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{System.out.println(a[i][j]);}
	}       
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			 if((i==j&&a[i][j]!=1) || (i!=j&&a[i][j]!=0))
                			{
			flag=1;
			break;
			}
		}
			if(flag==1)
                			break;
	}
			if(flag==1)
			System.out.println(" NON IDENTITY MATRIX");
            			else
                			System.out.println("IDENTITY MATRIX");
}
}
