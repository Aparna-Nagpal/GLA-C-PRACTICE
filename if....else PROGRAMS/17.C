//Program to input marks of five subjects and calculate percentage and grade.
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f,p,g;
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  p=(a+b+c+d+e)/5;
  if(p>=90)
  printf("A");
  else if(p>=80)
  printf("B");
  else if(p>=70)
  printf("C");
  else if(p>=60)
  printf("D");
  else if(p>=50)
  printf("E");
  else
  printf("F");
}
