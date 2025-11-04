/*Add all no including prime only*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
	int ans=0,d,n=232;
	while(n>0)
	{
		d=n%10;
        if( d == 2||3||5||7 )
		    ans=ans+d;
	    n=n/10;
	}
	printf("%d ",ans);

}