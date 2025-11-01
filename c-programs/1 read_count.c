#include <stdio.h>
char s[50];int i,spl=0,alp=0,count=0;;

void main() 
{
    printf("Enter sentence:");
    scanf("%[^\n]",s);
    //try with fgets

    for (i=0;s[i]!='\0';i++)
        if (s[i]>='a' && s[i]<='z' ||s[i]>='A' && s[i]<='Z' )
            alp++;
        else if(s[i]>='0' && s[i]<='9' )
            count++;
        else
            spl++;
         
printf("Chars:%d ,Digits=%d, Spl Chars=%d",alp,count,spl);
    
}
