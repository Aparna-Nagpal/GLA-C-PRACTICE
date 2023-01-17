
//Program to check leap year or not.
#include<stdio.h>
int main()
{
   int a,k;
   scanf("%d",&a);
   (a%400==0||a%4==0)?printf("Yes"):printf("No");
}
