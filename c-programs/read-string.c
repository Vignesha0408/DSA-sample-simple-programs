//is complete?
#include<stdio.h>
int main()
{
    char s1[50];
    printf("s1=");
    fgets(s1,sizeof(s1),stdin);
    printf("s1 is %s\n",s1);

    /*char s2[50];
    printf("s2=");
    scanf(" %s",s2);
    printf("s2 is %s\n",s2);*/

    /*char s3[50];
    printf("s3=");
    fgets(s3,sizeof(s3),stdin);
    printf("s3 is %s\n",s3);*/

    /*char s4[50];
    printf("s4=");
    scanf("%[^\n]",s4);
    printf("s4 is %s\n",s4);  */


    /*char s5[50];
    printf("s5=");
    gets(s5);
    printf("s5 is %s\n",s5);
*/


    return 0;
}