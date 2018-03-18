#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],t;
   int i,c,b=0,d;
  gets(a);
   c=strlen(a);
for(i=0;i<c;i++)
{
t=a[i];
    switch(t)
    {
        case 'I':
        d=1;
        break;
        case 'V':
        d=5;
        break;
        case 'X':
        d=9;
        break;
        default:
        printf("error");
        break;
        }
        if(i>=1&&b<d)
        b=b+d-2;
        else
        b=b+d;
}
printf("%d",b);
return 0;
}
