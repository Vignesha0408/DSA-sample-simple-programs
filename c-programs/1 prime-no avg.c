#include<stdio.h>
#include<stdlib.h>
int  main()
{
	float avg;
	int i,j,c,count=0,ans=0;
	for(j=2;j<10;j++)
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
	{	
	ans+=j;
	count+=1;
	if(count ==10)
	{	avg=ans/10;
	printf("avg:%f",avg);;
		return 0;
	}
	}
	}
	

	
}