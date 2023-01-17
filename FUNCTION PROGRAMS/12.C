//Program to reverse any number using function.
#include<stdio.h>
int rev(int m)
{
    int s=0,k;
    while(m>0)
    {
        k=m%10;
        s=s*10+k;
        m=m/10;
    }
    return(s);
}
void main()
{
    int a;
    scanf("%d",&a);
    printf("%d",rev(a));
}
