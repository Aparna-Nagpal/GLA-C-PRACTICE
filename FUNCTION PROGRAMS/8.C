//Program to print natural numbers between 1to n using function.
#include<stdio.h>
void nat(int f)
{
    int i;
    for(i=1;i<=f;i++)
    printf("%d ",i);
}
void main()
{
    int a;
    scanf("%d",&a);
    nat(a);
}
