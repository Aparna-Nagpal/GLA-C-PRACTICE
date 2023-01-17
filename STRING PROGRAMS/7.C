//Program to toggle case of each character of a string.
#include<stdio.h>
void main()
{
    int i;
    char a[]="aPArna";
    for(i=0;a[i];i++)
    {
        if(a[i]>96)
        a[i]=a[i]-32;
        else if(a[i]<96)
        a[i]+=32;
    }
    printf("%s",a);
}
