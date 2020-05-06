#include<stdio.h>
#include<conio.h>
#define size 100
int main(){

int stack[size],i,j,top=-1,n,ch;
printf("enter the size for your stack");
scanf("%d",&n);
do{

printf("enter the choice\n1.PUSH\n2.POP\n3.PEEK\n4.DISPLAY\n");
scanf("%d",&ch);
switch(ch)
{	case 1:
	if(top>=n-1)
	{
	printf("SORRY STACK IS FULL!!NO INSERTION POSSIBLE!!\n");
	}
	else 
	{
	printf("enter the value to insert\n");
	scanf("%d",&j);
	top++;
	stack[top]=j;
	printf("the inserted element was %d\n",j);}
	break;
	
	case 2:
	if(top<=-1)
	{printf("SORRY STACK IS EMPTY!!NO DELETION POSSIBLE!!\n");}
	else 
	{printf("the deleted element is %d\n",stack[top]);
	top--;}
	break;
	
	case 3:
	if(top==-1)
	{printf("STACK EMPTY NOTHING TO DISPLAY\n");}
	else 
	{	 
	printf("the value %d\n",stack[top]);
	}
	break;
		
	case 4:
	if(top==-1)
	printf("stack is empty\n");
	for(i=top;i>0;i--)
		{	printf("%d",stack[i]);
		} 
		break;
		case 5:
		printf("exit");
		break;
	default:
	printf("Invalid Choice!!!!!!");
	}

}while(ch!=5);
}

