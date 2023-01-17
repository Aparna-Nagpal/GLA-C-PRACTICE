//Program to convert days into years,
Weeks and days.
#include<stdio.h>
int main()
{
   int r;
   scanf("%d",&r);
   printf("Years=%d weeks=%d days=%d",r/365,r%365/7,r%365%7);
}
