#include <stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char a[100];
    int c,i,j=0,m=0,n=0,b=0;
    gets(a);
    c=strlen(a);
    for(i=0;i<c;i++)
    {
        if(isspace(a[i]))
        m++;
    }
while(j<=m)
{
    if(a[n]>=97&&a[n]<=122)
    {
    a[n]=a[n]-32;
    printf("%c",a[n]);
    }
    else
    printf("%c",a[n]);
    
    for(i=n;i<c;i++)
    {
        if(isspace(a[i]))
        b=i-1;
}
if(j==m)
b=c-1;

        for(i=n+1;i<=b;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            a[i]=a[i]+32;
            printf("%c",a[i]);
        }
        else
        printf("%c",a[i]);
    }
    printf(" ");
    n=b+2;
    j++;
}
}
        
