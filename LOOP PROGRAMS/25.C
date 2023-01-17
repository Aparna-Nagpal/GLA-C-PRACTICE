//Program to print all prime numbers between 1 to n.
#include<stdio.h>
void main()
{
  int a,b,i,h=0,u;
  scanf("%d",&u);
  for(a=2;a<=u;a++)
  {
      h=0;
  for(i=2;i<a;i++)
  {
    h++;
  
  if(a%i==0)
  break;
 }
  if(h==a-2)
  printf("%d",a);
  }
}
