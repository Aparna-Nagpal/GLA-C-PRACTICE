//Program to print multiplication table of any number.
#include<stdio.h>
void main()
{
  int n=1,a;
  scanf("%d",&a);
  while(n<=10)
  {
      printf("%d*%d=%d\n",a,n,a*n);
      n++;
  }
 }
