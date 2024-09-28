#include<stdio.h>
#include<math.h>

void tower(int n,char s ,char t,char d)
{ if (n==1)
	printf("Move disk from %c to %c \n",s,d);
  else
  {
	  tower(n-1,s,d,t);
	  printf("Move disk from %c to %c\n",s,d);
	  tower(n-1,t,s,d);
  }/*else*/
}/*tower*/

void main()
{
	int n,x;
	printf("Enter the number of disk\n");
	scanf("%d",&n);
	tower(n,'s','t','d');
	x=pow(2,n)-1;
	printf("Number of moves:\n",x);
}/*main*/