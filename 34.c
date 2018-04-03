#include<stdio.h>
void main()
{
    char s[100];
    int i,c;
    gets(s);
    c=strlen(s);
    for(i=0;i<c;i=i+3)
    {
        printf("%c",s[i]);
    }
    
}
