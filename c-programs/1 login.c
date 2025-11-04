#include <stdio.h>
#include <string.h> 
int  main() 
{
    char  user1='v', pass1='v',user2[5], pass2[5];

    front:

    printf("Enter UserName=");
    gets(user2);
    printf("Enter password=");
    gets(pass2);
    if(user1==user2 && pass1 == pass2)
    {
       printf("login successful");
       return 1;
    }
    else
    printf("Try again\n");
    goto front;
}
