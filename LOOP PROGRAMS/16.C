//Program to check whether a number is palindrome or not.
#include<stdio.h>
void main()
{
  int a,k=0,g;
  scanf("%d",&a);
  g=a;
  while(a>0)
  {
      k=k*10+a%10;
      a=a/10;
  }
  if(g==k)
  printf("Yes");
  else
  printf("No");
 }
