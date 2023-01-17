// Program to enter radius of a circle and find its diameter circumference and area.
#include<stdio.h>
int main()
{
   int r;
   scanf("%d",&r);
   printf("diameter=%d\n",2*r);
   printf("circum=%f\n",2*3.14*r);
   printf("area=%f\n",3.14*r*r);
}
