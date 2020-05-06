#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* link;

};
struct node* front=NULL;
struct node* rear=NULL;
void enqueue()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : \n");
	scanf("%d",&p->data);
	p->link=NULL;
	if(front==NULL && rear==NULL)
	front=rear=p;
	else 
	{
		struct node *temp;
		temp=rear;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}
}
void dequeue()
{
	if(front==NULL)
	printf("Underflow\n");
	else 
	{
		struct node *ptr;
		ptr=front;
		front=front->link;
		printf("Deleted element : %d \n",ptr->data);
		free(ptr);
	}
}
void display()
{
	if(front==NULL){printf("UNDERFLOW!!!!\n");}
	else{
	struct node* t;
		t=front;
		while(t!=NULL)
		{
		printf("\nTHE ELEMENTS ARE>>>>> %d \n",t->data);
		t=t->link;
		}
	}	   
}
void frnt(){
if(front==NULL){printf("UNDERFLOW!!!\n");}
else
printf("THE FRONT IS >>>>>%d\n",front->data);
}
int main()
{	int ch;
	do{
	printf("1.ENQUEUE 2.DEQUEUE 3.FRONT 4.DIPLAY 5.EXIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:enqueue();
			break;
			case 2:dequeue();
			break;
			case 3:frnt();
			break;
			case 4:display();
			break;
			case 5:printf("EXIT");
			break;
		    default:
		    printf("INVALID CHOICE!!!!\n");
		}
	  }while(ch!=5);
}

