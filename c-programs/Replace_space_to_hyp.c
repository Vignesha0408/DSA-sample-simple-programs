#include <stdio.h>
void main() 
{
    char s[50];int i;
    printf("Enter sentence:");
    scanf("%[^\n]",s);
    //try with fgets
    for (i=0;s[i]!='\0';i++)
        if (s[i]==' ')
            s[i]='_';
    printf("Sentence: %s", s);
}