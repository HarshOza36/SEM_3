#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	int data;
	struct node *right;
	struct node *left;
};
struct node *start=NULL;
struct node* count(struct node* start);
struct node* insertb();

struct node *create()
{
	struct node *p,*ptr;
	int num;
	printf("ENTER -1 TO END LOOP\n");
	printf("enter the data\n");
	scanf("%d",&num);
	while(num!=-1)
	{	if(start==NULL)
		{	p=(struct node*)malloc(sizeof(struct node));
			p->left=NULL;
			p->data=num;
			p->right=NULL;
			start=p;
		}
	    else 
		{	ptr=start;
			p=(struct node*)malloc(sizeof(struct node));
			p->data=num;
			while(ptr->right!=NULL){ptr=ptr->right;}
			ptr->right=p;
			p->left=ptr;
			p->right=NULL;
		}printf("enter the data\n");
	scanf("%d",&num);
		
	}
}
struct node* insertbeg()
{
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	start->left=p;
	p->right=start;
	p->left=NULL;
	start=p;
}
void insertend()
{
	struct node *p,*r;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : ");
	scanf("%d",&p->data);
	r=start;
	while(r->right!=NULL)
	{
		r=r->right;
	}
	r->right=p;
	p->left=r;
	p->right=NULL;
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
	ptr=start;
	while(ptr->data!=num)
	{
		ptr=ptr->right;
	}
	p->right=ptr;
	p->left=ptr->left;
	ptr->left->right=p;
	ptr->left=p;
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
	ptr=start;
	while(ptr->data!=num)
	{
		ptr=ptr->right;
	}
	p->left=ptr;
	p->right=ptr->right;
	ptr->right->left=p;
	ptr->right=p;
}
void deletebeg()
{
	if(start==NULL)
	printf("Underflow");
	else 
		if(start->right==NULL)
		{
			printf("Deleted element : %d",start->data);
			free(start);
			start=NULL;
		}
	else
	{
		struct node *ptr;
		ptr=start;
		start=start->right;
		start->left=NULL;
		printf("Deleted element : %d",ptr->data);
		free(ptr);
	}
}
struct node* deleteb()
{
	int num;
	struct node *p, *ptr, *temp;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data of node to delete before : ");
	scanf("%d",&num);
	printf("Enter data to be deleted : ");
	scanf("%d",&p->data);
	if(start==NULL){printf("UNDERFLOW\n");}
	else 
		if(start->right==NULL)
		{
			printf("Deleted element : %d",start->data);
			free(start);
			start=NULL;
		}
	else{
	ptr=start;
	while(ptr->data!=num)
	{
		ptr=ptr->right;
	}
	temp=ptr->left;
	ptr->left=temp->left;
	temp->left->right=ptr;
	free(temp);
	}
}
struct node* deleteend()
{
	if(start==NULL)
	{printf("Underflow");}
	else 
		if(start->right==NULL)
		{
			printf("Deleted element : %d",start->data);
			free(start);
			start=NULL;
		}
	else{
		struct node *ptr, *preptr;
		ptr=start;
		while(ptr->right!=NULL)
		{
			ptr=ptr->right;
		}
		ptr->left->right=NULL;
		printf("Deleted element : %d",ptr->data);
		free(ptr);
	}

}
/*struct node* count(struct node* start)
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

}*/
void display()
{
struct node* t;
		t=start;
		while(t!=NULL)
		{
		printf("\nTHE ELEMENTS ARE>>>>> %d ",t->data);
		t=t->right;
		}
		  
}
/*struct node * copy(struct node * start)
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
}*/
int main()
{
	int ch;
	
	do 
	{		printf("\nMENU\n1.CREATE 2.INSERT_BEG 3.INSERT_END 4.INSERT AFTER THE NODE 5.INSERT BEFORE THE NODE\n");
	printf(" 6.DELETE FROM BEG 7. DELETE FROM END 8. DELETE BEFORE 9.DISPLAY 10.END\n");
	printf("ENTER YOUR CHOICE\n ");
	
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			create();
			break;
			case 2:
			insertbeg();
			break;
			case 3:
			insertend();
			break;
			case 4:
			inserta();
			break;
			case 5:
			insertb();
			break;
			case 6:
			deletebeg();
			break;
			case 7:
			deleteend();
			break;
			case 8:
			deleteb();
			break;
			case 9:
			display();
			break;
			case 10:
			printf("EXIT");
			break;
			default:
			printf("Incorrect input");
			break;
		}
	}while(ch!=10);
	getch();
}

