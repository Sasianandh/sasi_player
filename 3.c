#include<stdio.h>
void main()
{
int i,n;
scanf("%d",&n);
while(n!=0)
{
    i=n%10;
    printf("%d",i);
    n=n/10;
}
}
