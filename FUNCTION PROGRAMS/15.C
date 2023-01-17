//Program to find factorial of any number using functions.
#include<stdio.h>
int fact(int m)
{
    int j,f=1;
    
    for(j=1;j<=m;j++)
    {
        f=f*j;
    }
    return(f);
}
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",fact(a));
}
