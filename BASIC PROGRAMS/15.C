//Program to enter marks of five subjects and calculate total, average and percentage.
#include<stdio.h>
int main()
{
   int a,b,c,d,e,v;
   scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
   v=a+b+c+d+e;
   printf("total=%d avg=%f percent=%f",v,v/5.0,v/5.0*100);
}
