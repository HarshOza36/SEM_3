#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct nodes{
	int data;
	struct nodes *l;
	struct nodes *r;
}node;

node *start = NULL;

void add(node *root, node *temp){
	if(root->data < temp->data){
		if(root->r == NULL){
			root->r = temp;
		}else{
			add(root->r, temp);
		}
	}else{
		if(root->l == NULL){
			root->l = temp;
		}else{
			add(root->l, temp);
		}
	}
}

void create(){
	int n, i;
	node *temp;
	printf("Enter number of elements>>>>");
	scanf("%d", &n);
	printf("Enter elements>>>>>\n");
	for(i=0; i<n; i++){
		temp = (node*) malloc(sizeof(node));
		scanf("%d", &temp->data);
		temp->l = NULL;
		temp->r = NULL;
		if(start == NULL){
			start = temp;
		}else{
			add(start, temp);
		}
	}
	printf("%d elements added\n", n);
}

void inOrder(node *root){
	if(root->l != NULL){
		inOrder(root->l);
	}
	printf("%d, ", root->data);
	if(root->r != NULL){
		inOrder(root->r);
	}
}


void preOrder(node *root){
	printf("%d, ", root->data);
	if(root->l != NULL){
		preOrder(root->l);
	}

	if(root->r != NULL){
		preOrder(root->r);
	}	
}

void postOrder(node *root){
	if(root->l != NULL){
		postOrder(root->l);
	}

	if(root->r != NULL){
		postOrder(root->r);
	}	
	printf("%d, ", root->data);
}

void search(node *root, int query){
	if(root == NULL){
		printf("Element not found\n");
	}else if(root->data > query){
		search(root->l, query);
	}else if(root->data < query){
		search(root->r, query);
	}else{
		printf("Element found at %d\n", root);
	}
}

void smallest(node *root){
	if(root->l == NULL){
		printf("Smallest element is >>>>%d\n", root->data);
	}else{
		smallest(root->l);
	}
}

void largest(node *root){
	if(root->r == NULL){
		printf("Largest element is >>>>>%d\n", root->data);
	}else{
		largest(root->r);
	}
}

void delete(node *root, node *curr, int query){
	node *temp, *prevtemp;
	if(start == NULL){
		printf("UNDERFLOW!!\n");
	}else if(curr == NULL){
		printf("Element not found\n");
	}else if(curr->data > query){
		delete(curr, curr->l, query);
	}else if(curr->data < query){
		delete(curr, curr->r, query);
	}else{
		if(curr->l == NULL && curr->r == NULL){
			if(start==curr){
				start = NULL;
			}else{
				if(root->l == curr)root->l = NULL;
				else root->r = NULL;
			}
			free(curr);
			printf("Value deleted\n");
		}else if(curr->l == NULL && curr->r != NULL){
			if(start==curr){
				start = curr->r;
			}else{
				if(root->l == curr)root->l = curr->r;
				else root->r = curr->r;			
			}
			free(curr);
			printf("Value deleted\n");
		}else if(curr->l != NULL && curr->r == NULL){
			if(start==curr){
				start = curr->l;
			}
			else{
				if(root->l == curr)root->l = curr->l;
				else root->r = curr->l;			
			}
			free(curr);
			printf("Value deleted\n");
		}else{
			temp = curr->r;
			prevtemp = curr;
			while(temp->l != NULL){
				prevtemp = temp;
				temp = temp->l;
			}
			curr->data = temp->data;
			delete(prevtemp, temp, temp->data);
		}
	}
}

int height(node *root){
	int lht, rht;
	if(root == NULL){
		return 0;
	}else{
		lht = height(root->l);
		rht = height(root->r);
		if(lht > rht){
			return lht+1;
		}
		return rht+1;
	}
}

int externalCount(node *root) { 
	if(root == NULL)        
		return 0; 
	if(root->l == NULL && root->r==NULL)       
		return 1;             
	return externalCount(root->l) + externalCount(root->r);
}

int internalCount(node *root){
	if(root == NULL)
		return 0;
	if(root->l == NULL && root->r==NULL)
		return 0;
	return internalCount(root->l) + internalCount(root->r) + 1;
	
}

void mirror(node *root){
	node *temp;
	if(root != NULL){
		temp = root->l;
		root->l = root->r;
		root->r = temp;
		mirror(root->l);
		mirror(root->r);
	}
}

int main(int argc, char const *argv[])
{
	int ch, temp;
	do{	printf("-------------------------MENU-----------------------------\n");
		printf("1.Create a tree 2.Preorder 3.Inorder 4.Postorder 5.Search\n");
		printf("6.Smallest 7.Largest 8.Height 9.Delete 10.Total internal and external node\n");
		printf("11: Mirror 12: Stop\n>>\n");
		scanf("%d", &ch);
		switch(ch){
			case 1:
				create();
				break;
			case 2:
				preOrder(start);
				printf("\n");
				break;
			case 3:
				inOrder(start);
				printf("\n");
				break;
			case 4:
				postOrder(start);
				printf("\n");
				break;
			case 5:
				printf("Enter value:");
				scanf("%d", &temp);
				search(start, temp);
				break;
			case 6:
				smallest(start);
				break;
			case 7:
				largest(start);
				break;
			case 8:
				printf("Height is %d\n", height(start));
				break;
			case 9:
				printf("Enter value>>>");
				scanf("%d", &temp);
				delete(NULL, start, temp);
				break;
			case 10:
				printf("Total internal nodes>>>%d\n", internalCount(start));
				printf("Total external nodes>>>%d\n", externalCount(start));
				break;
			case 11:
				mirror(start);
				printf("Tree mirrored\n");
				break;
			case 12:
				printf("EXIT");break;

		}
	}while(ch!=12);
}

