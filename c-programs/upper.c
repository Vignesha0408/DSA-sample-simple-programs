#include <stdio.h>
#include <string.h>
int i; char a[100];
void main()
{
    printf("Enter string:");
    scanf("%s", a); 
    for (i=0;i<strlen(a);i++) 
        //if ((int)a[i]>=65 && (int)a[i]<=90)
        if (a[i]>='A' && a[i]<='Z')
            printf("%c",a[i]+32); 
        //else if((int)a[i]>=97 && (int)a[i]<=122)
        else if(a[i]>='a' && a[i]<='z')
            printf("%c",a[i]-32);  
}/*main()*/





