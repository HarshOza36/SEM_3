/*PROGRAM TO CONVERT INFIX TO POSTFIX EXPRESSION AND EVALUATE*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
float res;

int
main ()
{
int i = 0, j = 0, top = -1;
char in[20], post[20], s[20];
float st[20], op1, op2;
printf ("Enter the arithmetic expression in infix notation\n");
scanf ("%s", post);
for (j = 0; post[j] != '\0'; j++)
{
if (isalnum (post[j]))
{
if (isdigit (post[j]))
{
st[++top] = post[j] - 48;
}
else
{
printf ("Enter value for%c", post[j]);
scanf ("%f", &st[++top]);
}
}
else
{
op2 = st[top--];
op1 = st[top--];
switch (post[j])
{
case '+':
res = op1 + op2;
st[++top] = res;
break;
case '-':
res = op1 - op2;
st[++top] = res;
break;
case '*':
res = op1 * op2;
st[++top] = res;
break;
case '/':
res = op2 / op1;
st[++top] = res;
break;
case '^':
res = pow (op1, op2);
st[++top] = res;
break;
}
}
}
printf ("Postfix Evaluation is ");
printf ("\n %f", st[top]);
}

