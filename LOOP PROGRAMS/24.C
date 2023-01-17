//Program to check whether a number is prime or not.
#include<stdio.h>
void main()
{
  int a,b,i,h=0;
  scanf("%d",&a);
  for(i=2;i<a;i++)
  {
    h++;
  
  if(a%i==0)
  break;
 }
  if(h==a-2)
  printf("prime");
  else
  printf("not prime");
}
  
