#include<stdio.h>
void main()
{
    int a,b,i,f=0,c=0,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        for(j=2;j<=i-1;j++)
        {
            if(i%j==0)
            {
            f=1;
            }
        }
        if(i==2 || f==0)
        c++;
        else
        f=0;
    }    
printf("%d",c);
}
