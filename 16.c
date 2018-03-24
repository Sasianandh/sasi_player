#include<stdio.h>
void main()
{
        int a[100],i,n,j,d=0,m=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
        scanf("%d",&a[i]);
        }
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            {
            
            d++;
            
            }
        }
        if(d==1)
        {
        printf("sigle entry = %d",a[i]);
        m++;
        d=0;
        }
        else
        d=0;
        }
        if(m==0)
        printf("no single entry");
}
