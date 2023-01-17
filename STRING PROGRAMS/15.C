//Program to count occurrences of a character in a string.
#include<stdio.h>
void main()
{
    char a[100];
    char j;
    int i,l=0;
    scanf("%[^\n]s",a);
    scanf(" %c",&j);
    for(i=0;a[i];i++)
    for(i=0;a[i];i++)
    {
        if(a[i]==j)
        {
        l++;
        }
    }
    printf("%d",l);
}
