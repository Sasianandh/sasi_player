#include<stdio.h>
void main()
{
        char a[100];
        int i,c;
        gets(a);
        c=strlen(a);
        for(i=0;i<c;i++)
      {
          a[i]=a[i]+3;
      }
      for(i=0;i<c;i++)
      {
          printf("%c",a[i]);
      }
}
        
