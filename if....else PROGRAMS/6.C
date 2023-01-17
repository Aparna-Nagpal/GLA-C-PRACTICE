//Program to find whether a year is leap or not.
#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a%4==0||a%400==0)
   printf("Yes");
   else
   printf("No");
}
