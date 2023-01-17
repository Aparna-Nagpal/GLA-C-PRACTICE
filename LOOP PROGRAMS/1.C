//Program to print all natural numbers 1 to n using while loop
#include<stdio.h>
int main()
{
  int n,a=1;
  scanf("%d",&n);
  while(n>0)
  {
      printf("%d ",a);
      a++;
      n--;
  }
}
