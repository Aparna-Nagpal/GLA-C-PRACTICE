//Program to concatenate two strings.
#include<stdio.h>
void main()
{
    int i,n=0,g;
    char a[]="APARNA",b[]="NAGPAL";
    for(i=0;a[i];i++)
    n++;
    for(i=n,g=0;b[g];i++,g++)
    a[i]=b[g];
    a[i]=0;
    printf("%s",a);
}
