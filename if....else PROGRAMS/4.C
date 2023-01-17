//Program to find whether a number is divisible by 5 and 11 or not.
#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   if(a%5==0&&a%11==0)
   printf("Yes");
   else
   printf("No");
}
