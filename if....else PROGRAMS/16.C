//Program to calculate profit or loss.
#include<stdio.h>
int main()
{
   int cp,sp;
   scanf("%d%d",&cp,&sp);
   if(cp>sp)
   printf("Loss=%d",cp-sp);
   else if(cp<sp)
   printf("Gain=%d",sp-cp);
   else
   printf("No gain or loss");
}
