#include<stdio.h>
void main()
{
    char s[100];
    int i,c,d,e=0;
    gets(s);
    c=strlen(s);
    for(i=0;i<c;i++)
    {
        if(s[i]=='(')
        d++;
        else if(s[i]==')')
        e++;
        else
        ;
    }
    if(d==e)
    printf("yes");
    else
    printf("no");
}
