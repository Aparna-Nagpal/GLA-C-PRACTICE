//Program to check whether a string is palindrome or not.
#include<stdio.h>
void main()
{
    int i,aw=0,d=0,f=0;
    char a[]="appa",b[100];
    for(i=0;a[i];i++)
    aw++;
    for(i=0;a[i];i++)
    b[i]=a[aw-1-i];
    for(i=0;a[i];i++)
    {
    if(a[i]!=b[i])
    f=1;
    break;
    }
    if(f==0)
    printf("Yes");
    else 
    printf("No");
}
