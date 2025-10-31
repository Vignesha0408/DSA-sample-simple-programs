#include<stdio.h>
#include<stdlib.h>
void main()
{
	int i,d,n=82772;
	int *a;
	a =(int *)malloc(10*sizeof(int));
	for(i=0;i<10;i++)
		a[i]=0;
	while(n>0)
	{
		d= n%10;
		for(i=0;i<10;i++)
			if(i == d)
				a[i]=a[i]+1;
		n=n/10;
	}
	printf("Digit Frequency");
	for(i=0;i<10;i++)
		if(a[i]==0); else printf("\n%d -> %d",i,a[i]);
	free(a);
}