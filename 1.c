#include<stdio.h>
void main()
{
    char s[100];
    int i,c;
    gets(s);
    c=strlen(s);
    for(i=c-1;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}
