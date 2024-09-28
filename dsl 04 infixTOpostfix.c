/* Develop a Program in C for converting an Infix Expression to Postfix Expression.  Program  
should  support  for  both  parenthesized  and free  parenthesized 
expressions with the operators: +, -, *, /, % (Remainder), ^ (Power) and alphanumeric 
operands.  */

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char stack[20];
int top=-1;

 int precedence(char c)
 { int p;
	switch(c){
		case '#':p=0;break;
		case '(':p=1;break;
		case '+':
		case '-':p=2;break;
		case '*':
		case '/':
		case '%':p=3;break;
		case '^':
		case '$':p=4;break;
		}/*switch*/
	return p;
 }/*precedence*/
 
 void push(char ch)
 {
	top++;
	stack[top]=ch;
 }/*push*/
 
 int pop()
 {
	return stack[top--];
 }/*pop*/
 
 void InfixToPostfix(char infix[20],char postfix[20])
 {int i=0,j=0;
	char ch,x;
	push('#');
	while(infix[i]!='\0')
	{
		ch=infix[i];
		switch(ch){
			case '(' : push(ch);
			break;
			case ')' : x=pop();
			while(x!='(')
			{
				postfix[j++]=x;
				x=pop();
			}/*while inside switch*/
			break;
		case '+':
		case '-':
		case '*':
		case '%':
		case '^':
		case '$':while(precedence(stack[top])>precedence(ch))
				postfix[j++]=pop();
				push(ch);
				break;
		default:postfix[j++]=ch;
		}/*switch*/
		i++;
	}/*while*/
	while(top>0)
	postfix[j++]=pop();
postfix[j]='\0';	
}/*InfixToPostfix*/
void main()
{
	char infix[25],postfix[25];
	printf("Enter the infix notation");
	scanf("%s",infix);
	printf("Notation of postfix");
	InfixToPostfix(infix,postfix);
	printf("Postfix notation: %s\n", postfix);
}/*main*/
/*
A+B*C -> ABC*+
(A+B)*C -> AB+*C
A^B+C -> AB^+C
(A+B)%C -> AB+%C
*/