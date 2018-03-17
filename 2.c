#include<stdio.h>
void main()
{
int i,n,f=1;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    f=i*f;
}
printf("%d",f);
}
