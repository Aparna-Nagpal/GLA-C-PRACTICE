//Program to find cube of any number using functions.
#include<stdio.h>
int cube(int h)//tsrs
{
    return(h*h*h);
}
int main()
{
    int n,c;
    scanf("%d",&n);
    c=cube(n);
    printf("%d",c);
}
