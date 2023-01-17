//Program to check number is palindrome or not.
#include<stdio.h>
void pal(int m)
{
    int s=0,k,j;
    j=m;
    while(m>0)
    {
        k=m%10;
        s=s*10+k;
        m=m/10;
    }
    if(j==s)
    printf("Palindrome");
    else
    printf("Not a Palindrome");
 
}
void main()
{
    int a;
    scanf("%d",&a);
    pal(a);
}
