//Program to find reverse of a string.
#include<stdio.h>
void main()
{
    int i,aw=0,d=0;
    char a[]="Aparna Nagpal lives in Agra",b[100];
    for(i=0;a[i];i++)
    aw++;
    for(i=0;a[i];i++)
    b[i]=a[aw-1-i];
    printf("%s",b);
}
