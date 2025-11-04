#include<stdio.h>
#include<string.h>

void main()
{
    int n,key,roll[50], marks[50], i=0;
    char name[50][50];
    printf("Enter total number of students: ");
    scanf("%d", &n);
    
for (i = 0; i < n; i++)
    {
        printf("Enter roll number: ");
        scanf("%d",&roll[i]);
        printf("Enter name: "); 
        scanf(" %49[^\n]",name[i]); //keep space?

        printf("Enter total Precentage: ");
        scanf("%d",&marks[i]);
   }
    printf("Enter student roll number to search: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (roll[i] == key)
            printf("Name: %s, Roll Number: %d, Total Marks: %d\n", name[i], roll[i], marks[i]);
}