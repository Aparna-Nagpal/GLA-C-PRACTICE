//Program to find maximum of three numbers .
#include<stdio.h>
int main()
{
   int a,b,c,k;
   scanf("%d%d%d",&a,&b,&c);
   k=a>b?a>c?a:c:b>c?b:c;
   printf("%d",k);
}
