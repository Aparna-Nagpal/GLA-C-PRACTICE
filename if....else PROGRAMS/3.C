//Program to find whether a number is positive, negative or zero.
#include<stdio.h>
int main()
{
   int a,b;
   scanf("%d%d",&a,&b);
   if(a>b)
   printf("Positive");
   else if(b>a)
   printf("Negative");
   else
   printf("Zero");
}
