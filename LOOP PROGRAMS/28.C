//Program to check whether a number is Armstrong or not.
#include<stdio.h>
void main()
{
  int a,p=0,k,l;
  scanf("%d",&a);
  l=a;
  while(a>0)
  {
      k=a%10;
      p=p+k*k*k;
      a=a/10;
  }
  if(l==p)
  printf("yes");
  else
  printf("no");
}
