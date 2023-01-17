//Program to count number of digits in a number.
#include<stdio.h>
void main()
{
  int a,s=0;
  scanf("%d",&a);
  while(a>0)
  {
      s++;
      a=a/10;
  }
  printf("%d",s);
 }
