//Program to print all even and odd numbers in a given range using functions.
#include<stdio.h>
void even(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("%d ",i);
    }
}
void odd(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    even(a,b);
    printf("\n");
    odd(a,b);}
