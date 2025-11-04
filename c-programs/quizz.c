#include<stdio.h>
int main()
{
    char check,res=0;;

printf("\nQ1. Which of the following is a prime number?"
"\nA) 4"
"\nB) 9"
"\nC) 13"
"\nD) 15"
"\nE) 21\n");
scanf(" %c",&check);
if(check=='c'||check=='C')
    res+=1;
printf("\nQ2. What does fgets() in C do?"
"\nA) Reads a single character from input"
"\nB) Reads a whole line safely"
"\nC) Reads a string without limit"
"\nD) Writes data to a file"
"\nE) Terminates a program\n");
scanf(" %c",&check);
if(check=='b'||check=='B')
    res+=1;
printf("\nQ3. Which of the following is an emirp (prime whose reverse is also prime)?"
"\nA) 23"
"\nB) 31"
"\nC) 37"
"\nD) 13"
"\nE) 11\n");
scanf(" %c",&check);
if(check=='d'||check=='D'||check=='c'||check=='C'||check=='B'||check=='b')
    res+=1;
printf("\nQ4. What does rand() % 10 produce in C?"
"\nA) Numbers from 0 to 10 inclusive"
"\nB) Numbers from 1 to 10"
"\nC) Numbers from 0 to 9"
"\nD) Numbers from -10 to 10"
"\nE) Always the same number\n");
scanf(" %c",&check);
if(check=='c'||check=='C')
    res+=1;
printf("Q5. In C, which of these formats is used in printf to print a floating-point number?"
"\nA) %%d"//why?
"\nB) %%c"
"\nC) %%s"
"\nD) %%f"
"\nE) %%x\n");
scanf(" %c",&check);
if(check=='d'||check=='D')
    res+=1;
 printf(
"\nAnswers:"

"\nQ1.C) 13"
"\nQ2.B) Reads a whole line safely"
"\nQ3.D) 13 (and also C) 37, B) 31, depending on the definition)"
"\nQ4.C) Numbers from 0 to 9"
"\nQ5.D) %%f"
"\nResult:%d/5",res
);

    return 0;
}









 