//Program to copy one string to another string.
#include<stdio.h>
void main()
{
    int i;
    char a[]="APARNA",b[20];
    for(i=0;a[i];i++)
    b[i]=a[i];
    printf("%s",b);
}
