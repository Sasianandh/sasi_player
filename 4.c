#include <stdio.h>
void main()
{
    char s[100];
    int c;
    gets(s);
    c=strlen(s);
    s[c]='.';
    puts(s);
}
