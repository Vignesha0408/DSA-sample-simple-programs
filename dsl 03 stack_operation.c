/*Write a program to implement 
the stack operation push, pop and display*/


#include <stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 10

void push(int x);
int pop();
int palindrome(int n);
void display();

int stack[MAX],top=-1;
void main()
 { int ch,x,n;
	 do{printf("\nstack options:\n1.Push\n2.Pop\n3.Palindrome\n4.Display\n5.Exit\n");
        printf("\nEnter choice");
        scanf("%d",&ch);
 
     switch(ch)
     {
	 case 1:
	    printf("\nEnter the data..");	
		scanf("%d",&x);
		push(x);
        break;
	 case 2:
	    x = pop();
		printf("\n%d poped out",x);
		break;
	 case 3:{ 
	    printf("\nEnter n:");
	    scanf("%d",&n);
		if(palindrome(n))
			printf("\n%d is palindrome",n);
		else
			printf("\n%d is not palindrome",n);
		break;
	 }/*case 3*/

	 case 4:
	    display();
		printf("\n\n\n");
	    break;

    }/*switch*/
 
 }while(ch<5);
  


 }/*main */
 void push(int x)
 {   if (top == MAX - 1)
	 {
        printf("\nStack is full");
     }
	 else
	 {
        top ++;
         stack[top] = x;
	 }/*else*/
 } /* push*/
 
int pop()
 {
	 int x;
	 if (top == -1)
		{printf("\nStack is empty");
        }
	else
	   {
	    x = stack[top];
	    top--;
	    return x;
	   }/*else*/
 }/*pop*/
 
int palindrome(int n)
 {
	 int num,rev=0,i=0,d;
     num=n;top=-1;
	 
     while(n>0) 
     {push(n%10);
      n=n/10;
     }/*while*/
	 
    while(top>=0)
    {
	 d = pop();
	 rev = rev+d *pow(10,i++);
    }/*while*/
	
    if (rev == num)
	    return 1;
    else 
	    return 0;
 }/*palindrome */
 
void display()
 {
	int i;
	if(top==-1)
	{ 
	 printf("\nstack is empty");
	}/*if*/
	else 
	{
	 for(i=top;i>=0;i--)
	 printf("\n%d",stack[i]);
	}/*else*/
	
 }/*display*/
 
 
 








