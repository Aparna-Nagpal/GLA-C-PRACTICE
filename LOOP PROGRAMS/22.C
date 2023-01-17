//Program to find hcf of two numbers.
#include<stdio.h>
void main()
{
  int a,b,min,i,s=1;
  scanf("%d%d",&a,&b);
  min=a>b?b:a;
  for(i=min;i>0;i--)
  if(a%i==0&&b%i==0){
  printf("%d",i);
  break;}
}
