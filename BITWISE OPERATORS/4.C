//Program to check the nth bit of a number
#include<stdio.h>
int main()
{
    int a,n,msb;
    scanf("%d%d",&a,&n);
    msb=1<<n;
    if(a&msb)
    printf("1");
    else
    printf("0");
}
