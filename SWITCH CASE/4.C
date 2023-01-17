//Program to find maximum of two numbers .
#include<stdio.h>
int main()
{
   int a,b,k;
   scanf("%d%d",&a,&b);
   switch(a>=b)
   {
        case 1:printf("%d",a);break;
        case 0:printf("%d",b);break;
   }
}
