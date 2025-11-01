/*Program to count vowel and consonent*/
#include<stdio.h>
#include<string.h>
char s[25];int i,c1=0,c2=0;
void main()
{
    
    printf("Enter:");
    //scanf("%s",s);
    scanf("%[^\n]",s);
    printf("String:%s\n",s);


    for(i=0;s[i]!='\0';i++)
        if(s[i] =='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            c1++;
        else if(s[i]==' ');
        else
            c2++;
    


    printf("Vowels= %d, Consonents=%d",c1,c2);
}
