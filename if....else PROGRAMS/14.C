//Program to input sides of triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if((b+c>a)&&(a+c>b)&&(a+c>c))
   printf("Valid");
   else
   printf("Not valid");
}
