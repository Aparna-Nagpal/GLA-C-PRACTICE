//Program to print sum of all odd natural numbers between 1 to n.
#include<stdio.h>
void main()
{
  int n=1,a,s=0;
  scanf("%d",&a);
  while(n<=a*2)
  {
      s=s+n;
      n=n+2;
  }
  printf("%d",s);
 }
