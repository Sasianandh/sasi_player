#include<stdio.h>
void main()
{
   char a[100],d;
   int i,c,b=0;
   gets(a);
   c=strlen(a);
for(i=0;i<c;i++)
{
    d=a[i];
    switch(d)
    {
        case I:
        d=1;
        break;
        case V:
        d=5;
        break;
        case X:
        d=9;
        break;
        default:
        printf("error");
        }
        b=b+d;
}
printf("%d",b);
}
   
