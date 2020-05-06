#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
struct node* count(struct node* start);
struct node* insertb();
struct node* insertbeg()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	p->link=NULL;
	if(start==NULL)
	start=p;
	else
	{
		p->link=start;
		start=p;
	}
}
void insertend()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	p->link=NULL;
	if(start==NULL)
	start=p;
	else
	{
		struct node *temp;
		temp=start;
		while(temp->link!=NULL)
		{
			temp=temp->link;
		}
		temp->link=p;
	}
}
struct node* insertb()
{
	int num;
	struct node *p, *ptr, *preptr;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data of node to insert before : ");
	scanf("%d",&num);
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	p->link=NULL;
	ptr=start;
	preptr=ptr;
	while(ptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->link;
	}
	preptr->link=p;
	p->link=ptr;
}
void inserta()
{
	int num;
	struct node *p, *ptr, *preptr;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data of node to insert after : ");
	scanf("%d",&num);
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	p->link=NULL;
	ptr=start;
	preptr=ptr;
	while(preptr->data!=num)
	{
		preptr=ptr;
		ptr=ptr->link;
	}
	preptr->link=p;
	p->link=ptr;
}
void deletebeg()
{
	if(start==NULL)
	printf("Underflow");
	else
	{
		struct node *ptr;
		ptr=start;
		start=start->link;
		printf("Deleted element : %d",ptr->data);
		free(ptr);
	}
}
struct node* deleteend()
{
	if(start==NULL)
	{printf("Underflow");}
	else if(start->link==NULL)
	{printf("Deleted element : %d",start->data);
		free(start);
		start=NULL;
	}
	else{
		struct node *ptr, *preptr;
		ptr=start;
	    preptr=ptr;
		while(ptr->link!=NULL)
		{
			preptr=ptr;
			ptr=ptr->link;
		}
		preptr->link=NULL;
		printf("Deleted element : %d",ptr->data);
		free(ptr);
	}
}
struct node* count(struct node* start)
{
	int c=0;
	struct node *ptr;
	ptr=start;
	while(ptr!=NULL)
	{
		ptr=ptr->link;
		c++;
	}
	printf("THERE ARE %d ELEMENTS IN THE LIST",c);
}
void search()
{
	struct node *ptr;
	int val, c=0, flag;
	printf("Enter element to be searched");
	scanf("%d",&val);
	ptr=start;
	while(ptr!=NULL)
	{
		if(val==ptr->data)
		{flag=(c+1); break; }
		else
		{
			ptr=ptr->link;
			c++;
		}
	}
	if(flag==0)
	printf("VALUE not present");
	else 
	printf("VALUE present at position : %d",flag);

}
void display()
{
struct node* t;
	
	 
	
	t=start;
		while(t!=NULL)
		{
		printf("\nTHE ELEMENTS ARE>>>>> %d ",t->data);
		t=t->link;
		}
		  
}
struct node * copy(struct node * start)
{
	struct node *ns, *ptr, *preptr, *new_node;
	ptr=start;
	ns=NULL;
	if(start==NULL)
	{
		printf("UNDERFLOW\n");
		return start;
	}
	ns=(struct node *)malloc(sizeof(struct node));
	ns->data = ptr->data;
	ns->link = NULL;
	ptr=ptr->link;
	while(ptr!=NULL)
	{
		new_node=(struct node *)malloc(sizeof(struct node));
		preptr=ns;
		while(preptr->link != NULL)
			preptr = preptr->link;
		preptr->link = new_node;
		new_node->data = ptr->data;
		new_node->link = NULL;
		ptr=ptr->link;
	}
	printf("List HAS BEEN Copied!\n");
	printf("New List>>>>");
	display(ns);
	return start;
}
int main()
{
	int ch;
	
	do 
	{		printf("\nMENU\n1.INSERT_BEG 2.INSERT_END 3.INSERT AFTER THE NODE 4.INSERT BEFORE THE NODE\n");
	printf(" 5.DELETE FROM BEG 6. DELETE FROM END 7.DISPLAY 8.SEARCH 9. COUNT 10.COPY 11.END\n");
	printf("ENTER YOUR CHOICE\n ");
	
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insertbeg();
			break;
			case 2:
			insertend();
			break;
			case 3:
			inserta();
			break;
			case 4:
			insertb();
			break;
			case 5:
			deletebeg();
			break;
			case 6:
			deleteend();
			break;
			case 7:
			display();
			break;
			case 8:
			search();
			break;
			case 9:
			count(start);
			break;
			case 10:
			copy(start);
			break;
			case 11:
			printf("EXIT");
			break;
			default:
			printf("Incorrect input");
			break;
		}
	}while(ch!=11);
	getch();
}

