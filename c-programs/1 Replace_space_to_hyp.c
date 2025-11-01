#include <stdio.h>
char s[50];int i;

void main() 
{
    printf("Enter sentence:");
    scanf("%[^\n]",s);
    //try with fgets
    for (i=0;s[i]!='\0';i++)
        if (s[i]==' ')
            s[i]='-';

    printf("Sentence: %s", s);
}