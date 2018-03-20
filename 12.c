#include<stdio.h>
#include<string.h>
void main()
{
    int a[100];
    int n,k,i,t;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        t=a[i+1];
        a[i+1]=a[i];
        a[i]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
}
}
