//Program to find sum of all natural numbers between 1 and n using functions.
#include<stdio.h>
int sum(int m)
{
    int i,s=0;
    for(i=1;i<=m;i++)
    s+=i;
    return(s);
}

void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
}
