//Program to check even or odd using functions.
#include<stdio.h>
int even(int m)
{
    return(m%2==0?1:0);
}
void main()
{
    printf("Enter a number");
    int a,b;
    scanf("%d",&a);
    b=even(a);
    if(b==1)
    printf("even");
    else
    printf("odd");
}
