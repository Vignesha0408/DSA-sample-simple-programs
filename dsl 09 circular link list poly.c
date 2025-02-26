/*
Develop a Program in C for the following operationson Singly 
Circular Linked List (SCLL) with header nodes 
a. Represent and Evaluate a Polynomial 
	P(x,y,z) = 6x2y2z-4yz5+3x3yz+2xy5z-2xyz3	
b. Find the sum of two polynomials POLY1(x,y,z) 
and POLY2(x,y,z) and store the result in POLYSUM(x,y,z) 
Support the program with appropriate functions for each 
of the above operations */

#include<stdio.h>
#include<math.h>
#include<stdlib.h>

struct poly
			{
			 int xp,yp,zp;
			 int coef;
			 struct poly *link;
			};
typedef struct poly POLY;

POLY *createnode()
{
	POLY *newnode;
	newnode = (POLY*)malloc(sizeof(POLY));
	newnode->link=NULL;
	return newnode;
}




POLY *insertend(POLY *p,int co,int a,int b,int c)//p is headnode,a b c are powers
{
	POLY *temp,*pstart;
	temp=createnode();
	
	temp->coef=co;
	temp->xp=a;
	temp->yp=b;
	temp->zp=c;
	
	if(p->link==p)
	{
	p->link=temp;//p is head
	temp->link=p;
	}
	else
		{
		pstart = p->link;
		while(pstart->link!=p)
			pstart = pstart->link;
		pstart->link=temp;
		temp->link=p;
		}
return p;
}






POLY *readpoly(POLY *p)
{int px,py,pz,co;
int ch;
	do{
		printf("Enter Coefficient,x power,y power,z power\n");
		scanf("%d%d%d%d",&co,&px,&py,&pz);
		p=insertend(p,co,px,py,pz); // p is head
		printf("Do you want to add(0-No,1-Yes)");
		scanf("%d",&ch);
	}while(ch!=0);
	return p;
}

float evaluatepoly(POLY *p,int x,int y, int z)
{
	POLY *temp;
	float result,sum=0;
	temp=p->link;
	while(temp!=p)
	{
		sum= sum + temp->coef*pow(x,temp->xp)*pow(y,temp->yp)*pow(z,temp->zp);
		temp = temp->link;
		}              
	return sum; 
}


POLY *addpoly(POLY *p1,POLY *p2,POLY *p3) 
{
POLY *h1 = p1->link;
POLY *h2 = p2->link;

while (h1!=p1&& h2 != p2) 
    {
    if(h1->xp == h2->xp && h1->yp == h2->yp && h1->zp == h2->zp ) 
        {
            p3 = insertend(p3, h1->coef + h2->coef, h1->xp, h1->yp, h1->zp);
            h1 = h1->link;
			h2 =h2->link;
        }
    else if(h1->xp > h2->xp) 
        {
            p3 = insertend(p3, h1->coef, h1->xp, h1->yp, h1->zp);
            h1 = h1->link;
        }
    else{
            p3 = insertend(p3, h2->coef, h2->xp, h2->yp, h2->zp);
	        h2=h2->link;
        }
    }/*while*/
	
while(h1!=p1)
    {
	    p3 = insertend(p3, h1->coef, h1->xp, h1->yp, h1->zp);
        h1 = h1->link;
    }
while(h2!=p2){
	    p3 = insertend(p3, h2->coef, h2->xp, h2->yp, h2->zp);
        h2 = h2->link;
}
	return p3;
} /*addpoly*/




void display(POLY *p) {
    POLY *temp;
    temp = p->link;
    if (temp == p) {
        printf("Polynomial is empty.\n");
        return;
    }
    
    printf("Polynomial: ");
    while (temp != p) {
        if (temp->coef > 0 && temp != p->link) {
            printf(" + ");
        }
        
        printf("%d", temp->coef);
        
        if (temp->xp != 0) 
            printf("x^%d", temp->xp);
        
        if (temp->yp != 0) 
            printf("y^%d", temp->yp);
        
        if (temp->zp != 0) 
            printf("z^%d", temp->zp);
        
        
        temp = temp->link;
    }
    printf("\n");
}

int main() {
    POLY *EQN1, *EQN2, *POLYSUM;
	float result;
	int x,y,z;
	EQN1 = (POLY *)malloc(sizeof(POLY));
    EQN2 = (POLY *)malloc(sizeof(POLY));
    POLYSUM = (POLY *)malloc(sizeof(POLY));
	
    EQN1->link = EQN1;
    EQN2->link = EQN2;
    POLYSUM->link = POLYSUM;

    printf("Enter the polynomial 1:\n");
    EQN1 = readpoly(EQN1);
	
	printf("Enter the polynomial 2:\n");
    EQN2 = readpoly(EQN2);
	
	printf("Polynomial 1: ");
    display(EQN1);
    printf("Polynomial 2: ");
    display(EQN2);
	
	POLYSUM=addpoly(EQN1,EQN2,POLYSUM);
	printf("Sum of polynomial : ");
    display(POLYSUM);
     
	
	printf("Enter the value of x y z.");
	scanf("%d%d%d",&x,&y,&z);
	
	result = evaluatepoly(EQN1,x,y,z);
    printf("The value of the first polynomial is: %f\n", result);

    result = evaluatepoly(EQN2,x,y,z);
    printf("The value of the second polynomial is: %f\n", result);

    result = evaluatepoly(POLYSUM,x,y,z);
    printf("The value of the sum of the polynomials is: %f\n", result);

	 }
	 
	 
	 /*
	Enter the polynomial 1:
Enter Coefficient,x power,y power,z power
3 2 2 1
Do you want to add(0-No,1-Yes)1
Enter Coefficient,x power,y power,z power
-4 0 1 5
Do you want to add(0-No,1-Yes)1
Enter Coefficient,x power,y power,z power
3 3 1 1
Do you want to add(0-No,1-Yes)1
Enter Coefficient,x power,y power,z power
2 1 5 1
Do you want to add(0-No,1-Yes)1
Enter Coefficient,x power,y power,z power
-2 1 1 3
Do you want to add(0-No,1-Yes)0
Enter the polynomial 2:
Enter Coefficient,x power,y power,z power
3 2 2 1
Do you want to add(0-No,1-Yes)1
Enter Coefficient,x power,y power,z power
15 2 2 1
Do you want to add(0-No,1-Yes)0
Polynomial 1: Polynomial: 3x^2y^2z^1-4y^1z^5 + 3x^3y^1z^1 + 2x^1y^5z^1-2x^1y^1z^3
Polynomial 2: Polynomial: 3x^2y^2z^1 + 15x^2y^2z^1
Sum of polynomial : Polynomial: 6x^2y^2z^1 + 15x^2y^2z^1-4y^1z^5 + 3x^3y^1z^1 + 2x^1y^5z^1-2x^1y^1z^3
Enter the value of x y z.
1 1 1
The value of the first polynomial is: 2.000000
The value of the second polynomial is: 18.000000
The value of the sum of the polynomials is: 20.000000
	 */