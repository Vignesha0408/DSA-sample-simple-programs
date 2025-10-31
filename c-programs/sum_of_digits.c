#include<stdio.h>
#include<stdlib.h>
void main()
{
	
	int sum=0,ld,num=1234;
	int n=num;
	while(num>0)
	{
		ld=num%10;
		sum+=ld;
		num=num/10;
		
	}
	printf("Sum of digits for %d is  %d",n,sum);
}