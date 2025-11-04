#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int n,n1,i,sum=0;
    srand(time(0));//why?

    printf("N=?");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        n1=rand()%10;
        printf("%d ",n1);
        sum=sum+n1;
    }
    printf("avg: %d ",(sum/n));
    return 0;
}