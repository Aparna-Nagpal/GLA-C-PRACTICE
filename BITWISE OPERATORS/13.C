//Program to get the highest set bit a number.
#include <stdio.h>
int main()
{
    int a,n,order=-1,i;
    scanf("%d",&a);
    n=sizeof(int)*4;
    for(i=0;i<n;i++)
    {
        if((a>>i)&1)
        order=i;
    }
    if(i!=-1)
    printf("%d",order);
    else
    printf("Enter a number other than zero");
    return 0;
}
