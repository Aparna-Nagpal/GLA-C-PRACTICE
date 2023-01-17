//Write a program to find sum of even and odd numbers in a given range.
#include<stdio.h>
int even(int m,int n)
{
    int i,s=0;
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        s+=i;
    }
    return(s);
}
int odd(int m,int n)
{
    int i,s=0;
    for(i=m;i<=n;i++)
    {
        if(i%2!=0)
        s+=i;
    }
    return(s);
}
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",even(a,b));
    printf("\n");
    printf("%d",odd(a,b));
}
