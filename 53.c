#include<stdio.h>
#include<string.h>
void main()
{
char s[100];
int n,i,j=0,k,g,x;
gets(s);
scanf("%d",&g);
n=strlen(s);
k=g;
while(i<n)
{
    if(k<=n)
{
for(x=i;x<k;x++)
{
    
    printf("%c",s[x]);
}
}
printf("  ");
i++;
k=i+g;
}
}
