#include <stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
    char s[100],t[100];
    int a,b,i=0,c=0,d=0,e=0,j;
    gets(s);
    gets(t);
    a=strlen(s);
    b=strlen(t);
    if(a==b)
    {
        while(i<a)
        {
            if(isalpha(s[i]))
            {
            for(j=i+1;j<a;j++)
            {
                if(s[i]==s[j])
                {
                c++;
                s[j]=' ';
                }
            }
            }
            if(isalpha(t[i]))
            {
            for(j=i+1;j<b;j++)
            {
                if(t[i]==t[j])
                {
                d++;
                t[j]=' ';
                }
            }
            }
            if(d!=c)
            {
        e++;
            }
            i++;
        }
        if(e==0)
        printf("yes");
        else
        printf("no");
    }
    else
    printf("no");
}
