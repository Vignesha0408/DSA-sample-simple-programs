#include <stdio.h>
void main() 
{
    char s[25];
    int i,A=0,C=0,D=0;;
    printf("Enter sentence:");
    scanf("%[^\n]",s);
    printf("%s",s);

    for (i=0;s[i]!='\0';i++)
        if (s[i]>='a' && s[i]<='z' ||s[i]>='A' && s[i]<='Z' )
            A++;
        else if(s[i]>='0' && s[i]<='9' )
            D++;
        else
            C++;
         
printf("Chars:%d ,Digits=%d, Spl Chars=%d",A,D,C);
    
}
