#include<stdio.h>
#include<conio.h>
#include<malloc.h>
struct node{
	int data;
	struct node* link;

};
struct node* top=NULL;
int push(){
	struct node *p;
	p=(struct node *)malloc(sizeof(struct node));
	printf("Enter data to be inserted : \n");
	scanf("%d",&p->data);
	p->link=NULL;
	if(top==NULL)
	top=p;
	else 
	{
		p->link=top;
		top=p;
	}
}
int pop(){
	if(top==NULL)
	printf("Underflow\n");
	else
	{
		struct node *ptr;
		ptr=top;
		top=top->link;
		printf("Deleted element : %d \n",ptr->data);
		free(ptr);
	}
}
int peek(){
	if(top==NULL){printf("UNDERFLOW\n");}
	else
	printf("top is: %d \n",top->data);

}
int display()
{	if(top==NULL){printf("UNDERFLOW!!!\n");}
	else
	{
		struct node* t;
		t=top;
		while(t!=NULL)
		{
		printf("\nTHE ELEMENTS ARE>>>>> %d \n",t->data);
		t=t->link;
		}
	}
}
int main()
{	int ch;
	do{
	printf("1.PUSH 2.POP 3.PEEK 4.DIPLAY 5.EXIT\n");
	printf("ENTER YOUR CHOICE\n");
	scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:peek();
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

