/*
prime.prime number whose digits reversed also form a prime number
*/
#include<stdio.h>
int ld,reve,n;
int prime(int n)
{
	int i,c=0;
	for(i=2;i<n;i++)
	{if(n%i==0)
		{
		c++;
		break;
		}
	}
	if(c==0)
		return 1;
	else
		return 0;
}
int rev(int n)
{ while(n>0)
	{
		ld=n%10;
		reve=reve*10+ld;
		n=n/10;
	}  return reve;
}

void main()
{
	printf("\nEnter n:");
	scanf("%d",&n);
	if(prime(n))
	{
		printf("\nGiven no is prime.");
		int x=rev(n);
		printf("\nReverse of no.=%d",x);
		if(prime(x))
			printf("\n it is perfect prime.");
	}
	else 
		printf("Given no is not perfect prime.");
}