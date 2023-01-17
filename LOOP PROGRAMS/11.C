
//Program to find first and last digit of any number.
#include<stdio.h>
void main()
{
  int a,s=0,p=1,g;
  scanf("%d",&a);
  g=a;
  while(a>0)
  {
      s++;
      a=a/10;
      p=p*10;
  }
  printf("%d %d",g/(p/10),g%10);
 }
