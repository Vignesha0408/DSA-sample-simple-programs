#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void genpas(int n)
{
    int *a,l;
    char *c="ABC123!@#$%";
    l=strlen(c);
    printf("\nPassword=");
    for(int i=0;i<n;i++)
        printf("%c ",c[rand()%l]);
    
}

int main()
{
    int  n;
    printf("\nEnter the number of letters:");
    scanf("%d",&n);
    genpas(n);
    return 0;
}