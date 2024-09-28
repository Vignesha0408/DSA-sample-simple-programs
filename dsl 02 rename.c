 
#include<stdio.h>
#include<stdlib.h>
char str[50],pat[50],rep[50],ans[50];
int i,j,k,m,c,flag=0;
void pattern();

void main()
{
printf("Enter the string\n");
gets(str);
printf("Enter the pattern string\n");
gets(pat);
printf("Enter the replacing string\n");
gets(rep);
pattern();
}/*main*/
void pattern()
{
i=m=c=j=0;
while(str[c]!='\0')
{
if(str[m]==pat[i])
{
i++; m++;
if(pat[i]=='\0')
{
flag=1;
for(k=0;rep[k]!='\0';k++,j++)
ans[j]=rep[k];
i=0;
c=m;
}/*if pat[i]*/
} /*if str[m]*/
else
{
ans[j]=str[c];
j++;
c++;
i=0;
m=c;
}/*else*/
}/*while*/
if(flag==0)
printf("Pattern not found\n");
else
{
ans[j]='\0';
printf("Result: %s\n",ans);
}
}/*pattern()*/