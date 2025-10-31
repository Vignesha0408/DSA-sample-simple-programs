// 153 = 1**3 + 5**3 +3**3 = 153 

#include<stdio.h>
#include<stdlib.h>
int size(int x);
long long compute(int y,int x);
long long result(int x);

int main()
{
	int x,u,c=0,i=0;
	
	printf("\nEnter x=");
	scanf("%d",&x);
	/*   // To check armsrong or not
	if(x==result(x)) 
		return (printf("It's armstrong."),0);
	else 
		return (printf("It's not armstrong."),0);
	*/

	/*     //to print armstrong from 0 to x
	for(i=0;i<=x;i++)
		if(i==result(i)) 
			printf("\n%d",i);
	*/


	/*     //to print n armstrongs
	while(c<x)
	{
		if(i==result(i)) 
			{
			printf("\n%d",result(i));
			c++;
			}
		i++;
	}
	*/
	
}/*main*/


long long result(int x)
{
	long long temp=x,res=0,d;
	while(temp>0)
	{
		d=temp%10;
		res=res+compute(d,x);
		temp=temp/10;
	}
	return res;
}


long long compute(int y,int x)
{
	long long v,ans=1;
	for(v=0;v<size(x);v++)
			ans= y*ans;
	return ans;
}/*compute()*/


int size(int x)
{
	int temp=x,n,count=0;	
	if(x==0) 
		return 1; 
	else
	{ while(temp>0)
	  {	
		temp=temp/10;
		++count;
	  }
	  return count;
	}
}/*size()*/



/*

Enter x=25

0
1
2
3
4
5
6
7
8
9
153
370
371
407
1634
8208
9474
54748
92727
93084
548834
1741725
4210818
9800817
9926315
*/ 