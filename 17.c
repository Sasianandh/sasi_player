#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b)
    {
        if(a%b==0)
        printf("ans = %d",a);
        else
         printf("ans = %d",a*b);
        }
        else
        {
         if(b%a==0)
        printf("ans = %d",b);
        else
        printf("ans = %d",a*b);
        }
}
