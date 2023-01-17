//Program to find first occurrence of a character in a string.
#include<stdio.h>
void main()
{
    char a[100];
    char j;
    int i,g=0;
    scanf("%[^\n]s",a);
    scanf(" %c",&j);
    for(i=0;a[i];i++)
    {
        if(a[i]==j)
        {
        g=1;
        break;
        }
    }
    if(g==1)
    printf("First occurence position=%d",i+1);
    else
    printf("not found");
}
