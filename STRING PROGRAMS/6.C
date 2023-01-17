//Program to convert lower case string to upper case.
#include<stdio.h>
void main()
{
    int i;
    char a[]="APArna";
    for(i=0;a[i];i++)
    {
        if(a[i]>96)
        a[i]=a[i]-32;
    }
    printf("%s",a);
}
