//Program to toggle nth bit of a number
#include<stdio.h>
int main()
{
    int a,n,new;
    scanf("%d%d",&a,&n);
    new=(1<<n)^a;
    
    printf("%d",new);
}
