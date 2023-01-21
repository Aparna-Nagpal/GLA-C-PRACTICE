//Program to check the least significant bit (LSB) of a number.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a&1)
    printf("LSB of %d is set 1",a);
    else
    printf("LSB of %d is set 0",a);
}
