#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,c,d=0,m=0,j,n;
    gets(s);
    c=strlen(s);
    for(i=0;i<c;i++)
    {
        for(j=i+1;j<c;j++)
        {
            if(s[i]==s[j])
            d++;
        }
        if(d>m)
        {
            m=d;
            n=i;
        }
        d=0;
        
    }
    printf("%c",s[n]);
}
