#include <stdio.h>
void main()
{
    int a,b,i,c=0;
    scanf("%d%d",&a,&b);
    for(i=1;i<=a&&i<=b;i++)
    {
        if(a%i==0&&b%i==0)
        c=i;
    }
    printf("%d",c);
}
