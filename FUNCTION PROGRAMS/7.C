//Program to find power of any number using function.
#include<stdio.h>
int power(int m,int n)
{
    int f=1,i;
    for(i=0;i<n;i++)
        f=f*m;
    return(f);
}
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",power(a,b));
}
