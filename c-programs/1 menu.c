#include<stdio.h>
#include<string.h>
int n,roll[10], marks[10], i;char name[10][50];
void main()
{
    printf("Enter total number of students: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter name: ");
        getchar(); 
        scanf("%[^\n]", name[i]); 
        printf("Enter roll number: ");
        scanf("%d", &roll[i]);
        printf("Enter total marks: ");
        scanf("%d", &marks[i]);
    }
    printf("Enter student roll number to search: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        if (roll[i] == n)
            printf("Name: %s, Roll Number: %d, Total Marks: %d\n", name[i], roll[i], marks[i]);
           
}
