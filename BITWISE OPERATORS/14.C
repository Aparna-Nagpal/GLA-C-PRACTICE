//Program to get the lowest set bit of a number.
#include <stdio.h>
int main()
{
    int a,n,order=-1,i;
    scanf("%d",&a);
    n=sizeof(int)*4;
    for(i=0;i<n;i++)
    {
        if((a>>i)&1)
        {
        order=i;
        break;
        }
    }
    if(i!=-1)
    printf("%d",order);
    else
    printf("Enter a number other than zero");
    return 0;
}
