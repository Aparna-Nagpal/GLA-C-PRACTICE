//Program to check whether a number is even or odd using bitwise and conditional operators.
#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    (a&1)?printf("ODD"):printf("EVEN");
   
}
