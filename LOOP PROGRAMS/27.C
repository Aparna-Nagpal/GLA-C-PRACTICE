//Program to find all prime factors of a number.
#include<stdio.h>
void main()
{
  int a,p,i,j;
  scanf("%d",&a);
  for(i=1;i<a;i++)
  {
      if(a%i==0)
      {
          p=0;
          for(j=2;j<i;j++)
          {
              p++;
              if(i%j==0)
              break;
          }
          if(p==i-2)
          printf("%d ",i);
      }
  }
}
