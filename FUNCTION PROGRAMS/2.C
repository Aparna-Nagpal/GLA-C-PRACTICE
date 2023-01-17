//Program to find diameter,circumference and area of any circle using functions.
#include<stdio.h>
int diam(int rad)
{
    return(2*rad);
}
float circum(int r)
{
    return(2*3.14*r);
}
float area(int rad)
{
    return(3.14*rad*rad);
}
int main()
{
    int r;
    scanf("%d",&r);
    printf("Diameter=%d\n",diam(r));
    printf("Circumference=%f\n",circum(r));
    printf("Area=%f\n",area(r));
    return 0;
}
