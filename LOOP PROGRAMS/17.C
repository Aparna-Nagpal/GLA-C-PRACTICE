//Program to find frequency of each digit in a number.
#include<stdio.h>
void main()
{
  int a,k=0,g,*p=0,i,c;
  scanf("%d",&a);
  g=a;
 for(i=0;i<=9;i++)
 {
     c=0;
     a=g;
     while(a>0)
     {
         k=a%10;
         a=a/10;
         if(k==i)
         c++;
     }
     printf("Frequency of %d is %d\n",i,c);
 }
  }
