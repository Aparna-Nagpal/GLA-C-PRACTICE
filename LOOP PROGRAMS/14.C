//Program to find product of digits of a number.
#include<stdio.h>
void main()
{
  int a,s=1,k;
  scanf("%d",&a);
  while(a>0)
  {
      k=a%10;
      s=s*k;
      a=a/10;
  }
  printf("%d",s);
 }
