#include<stdio.h>
#include<stdlib.h>
float sum=0;
int  main()
{
	float avg;
	int i,j,c,count=0;
	for(j=2;j<100;j++)//check j is prime?
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
	 sum+=j;
	 count+=1;
	 if(count ==10)
	 {	avg=sum/10;
	printf("avg:%f",avg);;
		return 0;
	 }
	}
	}
}