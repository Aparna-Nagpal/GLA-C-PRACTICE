//Program to a number is prime, armstrong or perfect using functions.
#include<stdio.h>
void prime(int m)
{
 int i,l=0;
 for(i=2;i<=m/2;i++)
 {
     l++;
     if(m%i==0)
     break;
 }
 if(l==m/2-1)
 printf("Number is Prime");
 else
 printf("Number is not Prime");
}
void arm(int n)
{
    int j,k,s=0;
    j=n;
    while(n>0)
    {
        k=n%10;
        n=n/10;
        s+=k*k*k;
    }
    if(j==s)
    printf("Number is armstrong");
    else
    printf("Number is not armstrong");
}
void perfect(int g)
{
    int i,j,s=0;
    j=g;
    for(i=1;i<=g/2;i++)
    {
        if(g%i==0)
        s+=i;
    }
    if(j==s)
    printf("Number is Perfect");
    else
    printf("Number is Not perfect ");
}
void main()
{
    int a;
    scanf("%d",&a);
    perfect(a);
    printf("\n");
    prime(a);
    printf("\n");
    arm(a);
    printf("\n");
}
