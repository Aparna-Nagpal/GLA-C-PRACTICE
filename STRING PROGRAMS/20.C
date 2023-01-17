//Program to replace all occurrences of a character in a string.
#include<stdio.h>
void main()
{
    char a[100];
    char j;
    int i,p,k=0;
    scanf("%[^\n]s",a);
    scanf(" %c",&j);
      for(i=0;a[i];i++)
      k++;
    for(i=0;a[i];i++)
    {
        if(a[i]==j)
        {
         a[i]='g';
        }
    }
    printf("%s",a);
}
