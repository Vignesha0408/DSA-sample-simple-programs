#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,c,j;
	for(j=10;j<20;j++)
	{
		c=0;
	for(i=2;i<j;i++)
	{
		if(j%i==0)
		  {
		   c++;
		   break;
		  }		
	}
	if(c==0)
		printf("%d ",j);	
	}
	
}