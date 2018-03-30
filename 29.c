#include<stdio.h>
void main()
{
 int a,b,i,j,c,d=0;
 scanf("%d%d",&a,&b);
     for(j=1;j<=b;j++)
     {
         c=j*j;
         for(i=a;i<=b;i++)
 {
     if(i==c)
     d++;
     }
 }
 printf("%d",d);
}
