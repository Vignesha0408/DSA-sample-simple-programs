#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,n=12,c=0;
	for(i=2;i<n;i++)
	{if(n%i==0)
		{
		c++;
		break;
		}		
	}
	if(c==0)
		printf("Given is prime.");
	else
		printf("Given is not prime.");
}