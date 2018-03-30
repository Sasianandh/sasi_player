#include<stdio.h>
#include<string.h>
void main()
{
 char s[100],j;
 int c,i,d=0,e=0;
 gets(s);
 c=strlen(s);
 for(i=0;i<c;i++)
 {
    for(j='0';j<='9';j++)
    {
    if(s[i]==j)
    d++;
    }
    if(d==0)
    e++;
    else
    d=0;
    }
    if(e==0)
    printf("yes it is numeric");
    else
    printf("no");
}
