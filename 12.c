#include<stdio.h>
#include<string.h>
void main()
{
    int a[100];
    int n,k,i,t,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        t=a[n-1];
        for(j=n-1;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=t;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
