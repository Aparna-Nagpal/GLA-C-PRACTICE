//Program to multiply a number by 31 using bitwise operators.
#include<stdio.h>
int main()
{
    int a,p;
    scanf("%d",&a);
    p=(a<<5)-a;
    printf("%d",p);
   
}
