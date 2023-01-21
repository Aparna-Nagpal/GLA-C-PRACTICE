//Program to find the most significant bit (msb) of a number.
#include<stdio.h>
int main()
{
    int a,b,msb;
    b=sizeof(int)*4;
    scanf("%d",&a);
    msb=1<<b;
    if(a&msb)
    printf("LSB of %d is set 1",a);
    else
    printf("LSB of %d is set 0",a);
}
