//Program to get the lowest bit of a number.
#include<stdio.h>
int main()
{
    int a,B,order,i;
    scanf("%d",&a);
    B=sizeof(int)*8;
    for(i=0;i<B;i++)
    {
    if((a>>i)^1)
    order=i;
    break;
    }
    printf("Order=%d",i);
}
