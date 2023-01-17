//Program to find whether is positive negative or zero using switch case.
#include<stdio.h>
int main()
{
   int a;
   scanf("%d",&a);
   switch(a>0)
   {
        case 1:printf("Positive");break;
        case 0:
        switch(a<0)
        {
            case 1:printf("Negative");break;
            case 0:printf("Zero");break;
        }
   }
}
