#include<stdio.h>
#include<string.h>
void main()
{
 char a[100],b[100];
 int i,n,j,c,d,e=0;
 gets(a);
 gets(b);
 scanf("%d",&n);
 c=strlen(a); d=strlen(b);
 if(c==d)
 {
     for(i=0;i<c;i++)
     {
         if(a[i]!=b[i])
         e++;
     }
     if(e==n)
     printf("yes");
     else
printf("no");
 }
 else
 printf("no");
}
