import java.util.*;
class Exp7a{
	public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int a[];
	int i,j,temp; 
	a= new int[50];
	System.out.println("Enter the  max elements for the array");
	int n=sc.nextInt();
	System.out.println("Enter the  elements for the array");
	for(i=0;i<n;i++)
	{
		a[i]=sc.nextInt();
	}
	System.out.println("Elements are...........");
	for(i=0;i<n;i++)
	{
		System.out.print(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j]>a[j+1])
		{	
			temp=a[j];
			a[j]=a[j+1];
			a[j+1]=temp;
		}
		}
	} 
	System.out.println("\nElements  SORTED  ASCENDING are...........");
	for(i=0;i<n;i++)
	{
		System.out.print(a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
		if(a[j+1]>a[j])
		{	
			temp=a[j+1];
			a[j+1]=a[j];
			a[j]=temp;
		}
		}
	} 
	System.out.println("\nElements  SORTED  DESCENDING are...........");
	for(i=0;i<n;i++)
	{
		System.out.print(a[i]);
	}
}
}