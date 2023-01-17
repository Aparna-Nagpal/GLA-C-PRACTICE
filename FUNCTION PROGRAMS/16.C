//Program to generate nth Fibonacci term using functions.
#include<stdio.h>
int fib(int m)
{
    int a=0,b=1,c,i;
    for(i=1;i<=m-2;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return(c);
}
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fib(a));
}
