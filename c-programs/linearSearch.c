#include <stdio.h>
#include<stdlib.h>
int main() 
{
    int *a,n,i,x;
    printf("\nEnter size= ");
    scanf("%d",&n);

    a=(int *)malloc(n*sizeof(int));
    printf("\nArray elements: ");
    for(i=0;i<n;i++) 
        printf("%d ",a[i]=i);

    printf("\nEnter search element=");
    scanf("%d", &x);

    for(i = 0; i < n; i++) 
        if(a[i] == x) 
            return (printf("\nElement found\n"),0);

        printf("\nElement not found\n");

    return 0;
}
