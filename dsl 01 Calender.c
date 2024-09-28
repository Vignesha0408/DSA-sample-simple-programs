#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char *DayName;
    int date;
    char *Activity;
} DAYTYPE;

DAYTYPE *createCalender()
{
    int i;
    DAYTYPE *calender = (DAYTYPE *)malloc(7 * sizeof(DAYTYPE));
    for (i = 0; i < 7; i++)
    {
        calender[i].DayName = NULL;
        calender[i].date = 0;
        calender[i].Activity = NULL;
    }
    return calender;
}

void readcal(DAYTYPE *calender)
{
    char name[20], act[100];
    int i;
    for (i = 0; i < 7; i++)
    {
        printf("Day name  ");
        scanf("%s", name);
        calender[i].DayName = strdup(name);

        printf("Date: ");
        scanf("%d", &(calender[i].date));

        printf("Activity: ");
        scanf("%s", act);
        calender[i].Activity = strdup(act);

        printf("\n");
    }
}

void display(DAYTYPE *calender)
{
    int i;
    printf("Week\t\tdays\t\tdetails:\n");
    for (i = 0; i < 7; i++)
        printf("%-16s%-16d%-16s\n", calender[i].DayName, calender[i].date, calender[i].Activity);
}

void freecal(DAYTYPE *calender)
{
    int i;
    for (i = 0; i < 7; i++)
    {
        free(calender[i].DayName);
        free(calender[i].Activity);
    }
    free(calender);
}

int main()
{
    DAYTYPE *calender = createCalender();
    readcal(calender);
    display(calender);
    freecal(calender);
    return 0;
}

