#include<stdio.h>
#include<string.h>
void main()
{
 char s[100];
 int i,c;
 gets(s);
 c=strlen(s);
 for(i=0;i<c;i++)
 {
     if(s[i]>=97&&s[i]<=122)
     s[i]-=32;
     else if(s[i]>=65&&s[i]<=90)
     s[i]+=32;
     else
     ;
 }
 puts(s);
}
