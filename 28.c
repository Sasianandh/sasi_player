#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
 char s[100];
 int i=0,c,j;
 gets(s);
 c=strlen(s);
 while(i<c)
 {
     if(isspace(s[i]))
     {
     for(j=i;j<c;j++)
     {
         s[j]=s[j+1];
         }
     }
     else
     i++;
 }
 puts(s);
}
