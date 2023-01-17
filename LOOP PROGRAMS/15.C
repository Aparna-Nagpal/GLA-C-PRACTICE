#include<stdio.h>
void main()
{
  int a,k=0;
  scanf("%d",&a);
  while(a>0)
  {
      k=k*10+a%10;
      a=a/10;
  }
  printf("%d",k);
 }
