#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<math.h>
#define s 100

float e[s];  
char stack[s];
int top=-1;

int push(char value){
	if(top==s-1)
	printf("stack overflow!!!!");
	else
	top++; 
	stack[top]=value;
	
}

char pop()
{
	char value ;

	if(top <0)
	{
		printf("stack under flow: invalid infix expression");
		getchar();
		exit(1);
	}
	else 
	{
		value = stack[top];
		top = top-1;
		return(value);
	}
}

int is_operator(char symbol){
	if(symbol=='^' || symbol=='/'|| symbol=='*' || symbol=='+' || symbol =='-')
	return(1);
	else 
	return(0);
}

int precedence(char symbol){
	if(symbol =='^')
	return (3);
	else if(symbol=='/' || symbol=='*')
	return (2);
	else if(symbol=='+' || symbol=='-')
	return (1);
	else 
	return (0);
}


int infixconversion(char infix_exp[],char postfix_exp[]){
	int i, j;
	char value;
	char x;
	push('(');                           
	strcat(infix_exp,")");              
	i=0;
	j=0;
	value=infix_exp[i];
	while(value != '\0')     
	{
		if(value == '(')
		{
			push(value);
		}
		else if( isdigit(value) || isalpha(value))
		{
			postfix_exp[j] = value;            
			j++;
		}
		else if(is_operator(value) == 1)      
		{
			x=pop();
			while(is_operator(x) == 1 && precedence(x)>= precedence(value))
			{
				postfix_exp[j] = x;             
				j++;
				x = pop();                    
			}
			push(x);

			push(value);             
		}
		else if(value == ')')         
		{
			x = pop();              
			while(x != '(')           
			{
				postfix_exp[j] = x;
				j++;
				x = pop();
			}
		}
		else
		{ 

			printf("\nInvalid infix Expression.\n");   
			getchar();
			exit(1);
		}
		i++;


		value = infix_exp[i];
	} 
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");        
		getchar();
		exit(1);
	}
	if(top>0)
	{
		printf("\nInvalid infix Expression.\n");   
		getchar();
		exit(1);
	}


	postfix_exp[j] = '\0'; 
	
}
int main()
{	int top,j,res;
	float op1,op2;
	char infix[s],postfix[s];        
	printf("\nEnter Infix expression : ");
	gets(infix);

	infixconversion(infix,postfix);                  
	printf("Postfix Expression: ");
	puts(postfix); 
	printf("THE EVALUATED POSTFIX IS: ");                    
	top=-1;
	for(j=0;postfix[j]!='\0';j++)
	{
		if(isalnum(postfix[j]))
		{
			if(isdigit(postfix[j]))
			{
				e[++top]=postfix[j]-48;
			}
			else 
			{	
			   printf("enter value for %c=",postfix[j]);
				scanf("%f",&e[++top]);
			}
		}
			else 
			{	 
				op2=e[top--];
				op1=e[top--];
				switch(postfix[j])
				{
				case '+':res=op1+op2;
					e[++top]=res;
					break;
				case '-':res=op1-op2;
					e[++top]=res;
					break;
				case '*':res=op1*op2;
					e[++top]=res;
					break;
				case '/':res=op1/op2;
					e[++top]=res;
					break;
				case '^':res=pow(op1,op2);
					e[++top]=res;
					break; 	   
						  	  	    	  	    	    	    	      	      	        
				}
			}
	}
	
	printf("the answer is =%f",e[top]);
	getch();
	return 0;
}


