#include<stdio.h>
#include<conio.h>
#define s 100
int main()
{
 	int a[s],mid,pos=-1,lb,ub,val,beg,end,i,n;
	printf("Enter the size for the array ");
	scanf("%d",&n);
	printf("Enter a sorted array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter for the value to be searched ");
	scanf("%d",&val);
	beg=0;
	end=n-1;
	while(beg<=end)
{
		mid=(beg+end)/2;
	
	if(a[mid]==val)
	{
		pos=mid;
		printf("\nposition   %d\n",pos);
		break;
	
	}
	else if(a[mid]>val)
	{
		end=mid-1;
	}
	else 
	beg=mid+1;
}
	if(pos==-1)
	{
	printf("value is not present");
	}
}

