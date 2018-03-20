#include<stdio.h>
#include<string.h>
void main()
{
    char s[100];
    int i,c,d=0,m=0,j,n;
    gets(s);
    c=strlen(s);
    for(i=c-1;i>=0;i--)
    {
        if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u')
        printf("%c",s[i]);
    }
}
