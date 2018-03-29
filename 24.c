#include <stdio.h>
#include<string.h>
void main()
{
   char s[100];
   int i=0,c,j,d=0,v=0;
   gets(s);
   c=strlen(s);
   while(i<c)
   {
       for(j='0';j<='9';j++)
       {
           if(s[i]!=s[j])
           {
           d++;
           }
       }
       if(d>0)
       {
           printf("no");
         v++;
       break;
       }
       else
       i++;
       }
       if(v==0)
       printf("yes");
   }
