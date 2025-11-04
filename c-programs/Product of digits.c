/*
To find product of digits of given no.
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int ans=1,d,n=232;
	while(n>0)
	{
		d=n%10;
		ans=ans*d;
		n=n/10;
	}
	printf("%d ",ans);

}