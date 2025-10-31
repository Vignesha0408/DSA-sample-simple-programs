#include<stdio.h>
int main()
{
    for(int i=0;i<5;i++)
    {
        printf("i->%d then j->",i);
        for(int j=0;j<5;j++)
        printf(" %d ",j);
        printf("\n");
    }
    return 0;
}
