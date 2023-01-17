//Program to find whether a number is even or odd using switch case.
#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   switch(a%2)
   {
        case 1:printf("Odd");break;
        case 0:printf("Even");break;
   }
}
