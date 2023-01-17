//Program to check whether an alphabet is uppercase or lowercase.
#include<stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   if(a>='a'&&a<='z')
   printf("lowercase");
   else
   printf("uppercase");
}
