#include<stdio.h>
void main()
{
   char a[100],b[100];
   int i,j,c,d=0;
   gets(a); gets(b);
   c=strlen(a);
  for(i=0;i<c;i++)
  {
      if(a[i]!=b[i])
      d++;
  }
      if(d==1)
      printf("yes");
      else
      printf("no");
   }
