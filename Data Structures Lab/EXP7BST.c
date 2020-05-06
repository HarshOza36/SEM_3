#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *left,*right;
};
struct node* root=NULL;

int create(){
	root=NULL;
}
int insert(){
	struct node *t,*p;
	int n;
	t=(struct node*)malloc(sizeof(struct node));
	printf("ENTER THE DATA TO BE INSERTED\n");
	scanf("%d",&n);
	t->data=n;
	t->left=NULL;
	t->right=NULL;
	p=root;
	if(root==NULL)
	{root=t;}
	else{
	struct node* curr;
	curr=root;
	while(curr)
	{
	p=curr;
	if(t->data>curr->data)
	{curr=curr->right;}
	else{curr=curr->left;}
	if(t->data>p->data)
	{p->right=t;}
	else{p->left=t;}
	}
	}
}
int inorder(){
	if(root!=NULL)
	{
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
int preorder(){
if(root!=NULL)
	{
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int postorder(){
if(root!=NULL)
	{
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
		}
}
int small(){
	if(root==NULL || root->left==NULL)
	{
		printf("smallest %d",root);
	}
	else { 	printf("smallest %d",small(root->left));}
}
int large(){
	if(root==NULL || root->right==NULL)
	{
		printf("largest %d",root);
	}
	else { printf("largest %d\n",large(root->right));}
}
int delete(){
	struct node *cur,*par,*s,*p,*ptr;
	int val;
	if(root->left==NULL)
	{printf("TREE EMPTY\n");}
	par=root;
	cur=root->left;
	while(cur!=NULL && val!=cur->data)
	{
		par=cur;
		cur=(val<cur->data)?cur->left:cur->right;
	}
	if(cur==NULL)
	{
		printf("VALUE DElEtED NOT IN TREE\n");
	}
	if(cur->left==NULL)
		{ptr=cur->right;}
	else if(cur->right==NULL)
		{ptr=cur->left;}
	else 
	{
		p=cur;
		cur=cur->left;
		while(s->left!=NULL)
		{
			p=s;
			s=s->left;
		}
		if(cur==p)
		{
			s->left=cur->right;
		}
		else{
		
			s->left=cur->left;
			p->left=s->right;
			s->right=cur->right;
			}
			ptr=s;
			
	}
	if(par->left==cur)
		{par->left=ptr;}
	else 
	{par->right=ptr;
	free(cur);}
}
int mirror(){
struct node* ptr;
	if(root!=NULL)
	{
	mirror(root->left);
	mirror(root->right);
	ptr=root->left;
	ptr->left=ptr->right;
	root->right=ptr;
	}
}
int height(){
	int lh,rh;
	if(root==NULL)
		printf("UNDERFLOW\n");
	else{
		lh=height(root->left);
		rh=height(root->right);
		if(lh>rh)
			return(lh + 1);
		else 
			return(rh + 1);
		}
}
/*int count(){}*/
int main()
{
	int ch;
	do 
	{	printf("---------------------------MENU-------------------------------\n");
		printf("1.CREATE 2.INSERT 3.INORDER TRAVERSAL 4.PREORDER 5.POST ORDER\n");
		printf("6.FIND SMALLEST ELEMENT 7.FIND LARGEST ELEMENT 8.DELETE ELEMENT\n");
		printf("9.MIRROR THE TREE 10.HEIGHT OF THE TREE 11. COUNT NO OF NODES 12.END\n");
		printf("ENTER YOUR CHOICE\n ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			create();
			break;
			case 2:
			insert();
			break;
			case 3:
			inorder();
			break;
			case 4:
			preorder();
			break;
			case 5:
			postorder();
			break;
			case 6:
			small();
			break;
			case 7:
			large();
			break;
			case 8:
			delete();
			break;
			case 9:
			mirror();
			break;
			case 10:
			height();
			break;
			/*case 11:
			count();
			break;*/
			case 12:
			printf("EXIT");
			break;
			default:
			printf("Incorrect input");
			break;
		}
	}while(ch!=12);
	getch();
}

