//Program to input electricity input charges and calculate total electricity bill.
#include<stdio.h>
int main()
{
  int a;
  float m=0;;
  scanf("%d",&a);
  if(a<=50)
  m=0.5*a;
  else if(a>50&&a<=150)
  m=50*0.5+.75*(100-a);
  else if(a>150&&a<=250)
  m=50*.5+.75*(100)+1.20*(250-a);
  else 
m=50*.5+.75*(100)+1.20*100+1.5*(a-250);
 printf("%f",1.2*m); 
}
