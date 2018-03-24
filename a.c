#include<stdio.h>
#include<string.h>
void main()
{
    char a[100],sum=0;
    int i,c,j=0,m=0,n,k;
    gets(a);
    c=strlen(a);
    while(j<c)
    {
    for(i=m;i<c;i++)
    {
        if(a[i]==' ')
        {
        n=i-1;
        break;
        }
    }
    for(k=m;k<=n;k++)
    {
        sum=sum+(a[k]-97);
    }
    m=i+1;
    j++;
    }
    printf("%d",sum);
}
