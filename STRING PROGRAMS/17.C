//Program to remove last occurrence of a character in a string.
#include<stdio.h>
void main()
{
    char a[100];
    char j;
    int i,l=0,g=0,p,k=0;
    scanf("%[^\n]s",a);
    scanf(" %c",&j);
    for(i=0;a[i];i++)
    k++;
    for(i=k-1;i>=0;i--)
    {
        if(a[i]==j)
        {
        g=1;
        break;
        }
    }
    if(g==1)
    {
        for(p=i;a[p];p++)
        a[p]=a[p+1];
    }
    a[p]=0;
    printf("%s",a);
}
