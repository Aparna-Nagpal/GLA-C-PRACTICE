//Program to enter p,t,r and calculate compound interest.
#include<stdio.h>
#include<math.h>
int main()
{
   int p,t,r;
   float y;
   scanf("%d%d%d",&p,&t,&r);
   y=pow(1+0.01*r,t);
   printf("%f",y*p-p);
}
