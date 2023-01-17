//Program to print all natural numbers in reverse n to 1 using while loop.
#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  while(n>0)
  {
      printf("%d ",n);
      n--;
  }
}
