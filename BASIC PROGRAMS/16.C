//Program to enter p,t,r and calculate simple interest.
#include<stdio.h>
int main()
{
   int p,t,r;
   scanf("%d%d%d",&p,&t,&r);
   printf("%f",p*t*r/100.0);
}
