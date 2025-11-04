#include<stdio.h>
#include<stdlib.h>
int  main()
{
	float avg,m=0,sum=0;
	int i,j,c;
	for(j=1;j<10;j++)
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
	    sum=sum+j;m++;
	    avg=sum/m;
	  }
	}
		printf("%.2f",avg);
		return 0;
}