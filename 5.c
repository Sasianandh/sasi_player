#include<stdio.h>
#include<string.h>
int main()
{
   char a[100],t;
   int i,c,b=0,d,k=1;
  gets(a);
   c=strlen(a);
for(i=0;i<c;i++)
{
t=a[i];
    switch(t)
    {
        case 'i': case 'I':
        d=1;
        break;
        case 'v': case 'V':
        d=5;
        break;
        case 'x': case 'X':
        d=10;
        break;
        case 'l': case 'L':
        d=50;
        break;
        case 'c': case 'C':
        d=100;
        break;
        case 'd': case 'D':
        d=500;
        break;
        case 'm': case 'M':
        d=1000;
        break;
        default:
        printf("error");
        break;
        }
        if(i>=1&&k<d)
        {
        b=b+(d-k-b);
        }
        else
        {
        b=b+d;
        }
        k=d;
}
printf("%d",b);
return 0;
}
