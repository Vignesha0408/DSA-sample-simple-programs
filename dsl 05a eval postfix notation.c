#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 25

int stack[MAX];
int top=-1;

void push(int x)
	{   top++;
		stack[top]=x;
	}/* push*/
 
int pop()
	{
	 return (stack[top--]);			 
	}/*pop*/

int evaluate(char postfix[])
	{ 
	int i=0,op1,op2,value,result;
	char c;
	while(postfix[i]!='\0')
	{
		c=postfix[i];
		if(isalpha(c)){
			printf("Enter the value %c:",c);
			scanf("%d",&value);
			push(value);
			}/*isalpha*/
		else if(isdigit(c)){
			push(c-'0');
		}/*isdigit*/
		else{
			op1=pop();
			op2=pop();
			switch(c){
				case '+':push(op1+op2);break;
				case '-':push(op1-op2);break;
				case '*':push(op1*op2);break;
				case '/':push(op1/op2);break;
				case '^':push(pow(op1,op2));break;
				case '%':push(op1%op2);break;
			}/*switch*/
		}/* operator*/
		i++;
	}/*while*/
result=pop();return result;
	}/*evaluate*/



void main()
{
	
	char postfix[25];int result;
	printf("enter postfix expression");
	scanf("%s",postfix);
	result=evaluate(postfix);
	printf("Result= %d",result);
}/*main*/
