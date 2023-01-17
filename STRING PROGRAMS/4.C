//Program to compare two strings.
#include<stdio.h>
void main()
{
    int i,n=0,g,m=0;
    char a[]="APARNA",b[]="NAGPAL";
    for(i=0;b[i]||a[i];i++)
    {
        if(a[i]!=b[i])
        m=1;
        break;
    }
    if(a[i]>b[i])
    printf("1,%d",a[i]-b[i]);
    else
    printf("2,%d",b[i]-a[i]);
}
