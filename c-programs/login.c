#include <stdio.h>
#include <string.h> 
#include<stdlib.h>
int  main() 
{
    char  *user1="v",*pass1="v",*user2, *pass2;
    user2=(char*)malloc(5*sizeof(char));
    pass2=(char*)malloc(5*sizeof(char));
    front:
    printf("Enter UserName=");
    scanf("%s",user2);
    printf("Enter password=");
    scanf("%s",pass2);
    if(strcmp(user1,user2) == 0 && strcmp(pass1,pass2) ==0)
    {
       printf("login successful");
       return 1;
    }
    else
    printf("Try again\n");
    goto front;
}