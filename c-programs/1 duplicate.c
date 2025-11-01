//It will remove duplicate no.
#include<stdio.h>

int main()
{
  int i,j,*a;
   printf("Enter numbers=");
   for(i=0;i<5;i++)
      scanf("%d",a+i);
    
   for(i=0;i<5;i++)
      printf("%d  ",*(a+i));

    for(i=0;i<5;i++)
        for(j=i+1;j<5;j++)
          if(a[i]==a[j])
            return (printf("\n%d  is duplicate", a[j]), 0);
           

           
            
}