
#include <stdio.h>
#include <string.h> 
char str[25];


void main() {
    printf("Login:\n");scanf("%s", str);

    if (strcmp(str, "admin")) 
        printf("Login failed.\n");
    else 
        printf("Login success.\n");


    printf("Username:\n");scanf("%s", str);

    if (strcmp(str, "admin")) 
        printf("Login failed.\n");
    else 
        printf("Login success.\n");
    


}

