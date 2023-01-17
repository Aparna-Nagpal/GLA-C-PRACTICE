//Program to check whether triangle is equilateral, isosceles, or scalene.
#include<stdio.h>
int main()
{
   int a,b,c;
   scanf("%d%d%d",&a,&b,&c);
   if(a==b&&b==c)
   printf("Equilateral");
   else if(a==b||b==c||c==a)
   printf("Isosceles");
   else
   printf("Scalene");
}
