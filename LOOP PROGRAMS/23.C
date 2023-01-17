//Program to find lcm of two numbers.
#include<stdio.h>
void main()
{
  int a,b,min,i,hcf;
  scanf("%d%d",&a,&b);
  min=a>b?b:a;
  for(i=min;i>0;i--)
  if(a%i==0&&b%i==0){
  hcf=i;
  break;}
  printf("%d",a*b/hcf);
}
