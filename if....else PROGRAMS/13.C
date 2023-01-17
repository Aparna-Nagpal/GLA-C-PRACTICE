//Program to input angles of triangle and check whether triangle is valid or not.
#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a+b+c==180)
   printf("Valid");
   else
   printf("Not valid");
}
