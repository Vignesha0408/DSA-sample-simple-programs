#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int sum=0,d,num=121421,rev=0,n;
	n=num;
	while(n>0)
	{
		d=n%10;
		rev=rev*10+d;
		n=n/10;
	}
	
	if (rev==num)
		printf("It is palindrome.");
	else
		printf("It is not palindrome.");
}