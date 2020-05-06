#include<stdio.h>
#include<conio.h>
#define s 100

int queue[s],a,i,j,n,front=-1,rear=-1;
int isFull(){
	if(front==0 && rear==n-1)
	printf("QUEUE FULL\n");
	else 
	printf("NOT FULL\n");
}
int isEmpty(){
	if(front==-1||front>rear)
	printf("QUEUE EMPTY\n");
	else 
	printf("NOT EMPTY\n");
}
int enqueue(){

if(front==0 && rear==n-1)
{
printf("QUEUE OVERFLOW\n");
}	 
else if(front==-1 && rear ==-1)
{
printf("enter a value to insert\n");
scanf("%d",&a);
front=0;
rear=0;
queue[rear]=a;
	printf("the value inserted was %d\n",a);
}
else if(rear==n-1 && front!=0)
{
printf("enter a value to insert\n");
scanf("%d",&a);
rear=0;
queue[rear]=a;
	printf("the value inserted was %d\n",a);
}
else 

{
printf("enter a value to insert\n");
scanf("%d",&a);
	rear++;
	queue[rear]=a;
	printf("the value inserted was %d\n",a);
	
}
}
int dequeue(){
	if(front==-1 && rear==-1)
	{
	printf("UNDERFLOW\n");
	return -1;
	}
	a=queue[front];
	 if(front==rear)
     	 front=rear=-1;
		else{
			if(front==n-1)
			front=0;
			else front++;
	}	 	 
        printf("Deleted element is:%d\n",a);
}


int display(){
int i;
if(front==-1 && rear==-1)
printf("QUEUE UNDERFLOW\n");
else 
{for(i=front;i<=rear;i++)
{
printf("%d\n",queue[i]);
}
}
}
int main(){
	
	printf("enter the maximum limit for your queue\n");
	scanf("%d",&n);
	do{
	printf("enter your choice 1.ISFULL 2.ISEMPTY 3.INSERT 4.DELETE 5.DIPLAY 6.EXIT\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1: isFull();
		break;
			case 2: isEmpty();
		break;
			case 3: enqueue();
		break;
			case 4: dequeue();
		break;
			case 5: display();
		break;
			default :
			printf("EXIT");
		break;
		
	}
	}while(i!=6);
	
	
}

