#include<stdio.h>
void main()
{
        int a,b,c=0;
        scanf("%d",&a);
        while(a!=0)
        {
            b=a%10;
            c=c+b*b;
            a=a/10;
        }
        printf("%d",c);
}
