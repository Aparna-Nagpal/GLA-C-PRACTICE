//Program to find power of a number using loop
#include<stdio.h>
void main()
{
  int a,i,s=1;
  scanf("%d%d",&a,&i);
  while(i>0)
  {
      s=s*a;
      i--;
  }
  printf("%d",s);
}
