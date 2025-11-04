#include <stdio.h>
#include <string.h>
int i; char a[100];
void main()
{
    printf("Enter string:");
    scanf("%s", a); 
    for (i=0;i<strlen(a);i++) 
        if ((int)a[i]>=65 && (int)a[i]<=90)
            printf("%c",a[i]+32); 
        else if((int)a[i]>=97 && (int)a[i]<=122)
            printf("%c",a[i]-32);  
}/*main()*/





