//Program to print sum of all natural numbers between 1 to n.
#include<stdio.h>
void main()
{
  int n=1,a,s=0;
  scanf("%d",&a);
  while(n<=a)
  {
      s=s+n;
      n++;
  }
  printf("%d",s);
 }
