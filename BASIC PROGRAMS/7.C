//Program to enter length in cm and convert into m and km.
#include<stdio.h>
int main()
{
   int r;
   scanf("%d",&r);
   printf("%fm %fkm",r/100.0,r/100000.0);
}
