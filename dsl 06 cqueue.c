#include <stdio.h>
#include <stdlib.h>
#define max 5
char queue[max];int front=-1,rear=-1;
void cqinsert();
void cqdelete();
void cqdisplay();

void main()
	{
		printf("\nCircular Queue operations");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		int ch;
		do{
			printf("\nEnter choice:");
			scanf("%d",&ch);
			switch(ch)
				{
					case 1:cqinsert();break;
					case 2:cqdelete();break;
					case 3:cqdisplay();break;
				}/* switch*/
			}while(ch<4);  /*do while*/
     
	}/*main*/


void cqinsert()
	{
		if(front==(rear+1)%max)
			printf("\nQueue overflow");
		else
		{
			if(front==-1)
				front++;
			rear=(rear+1)%max;
			printf("\nEnter element to be inserted:");
			scanf(" %c",&queue[rear]);
		}/* else*/
	}/* cqinsert*/
void cqdelete()
	{
		if(rear==-1)
			printf("\nQueue underflow");
		else
		{
			printf("\nElemnt deleted is:%c",queue[front]);
			if(front==rear)
				front=rear=-1;
			else
				front=(front+1)%max;
		}/*else*/
	}/*cqdelete*/
void cqdisplay()
	{
		if(front==-1)
			printf("\nQueue empty");
		else
		{
			int j=front;
			printf("\nQueue elements are:\n");
			do{
				printf(" %c",queue[j]);
				j=(j+1)%max;
				}while(j!=((rear+1)%max)); /*do while*/
		}/* else condition */
} /* cqdisplay function*/


