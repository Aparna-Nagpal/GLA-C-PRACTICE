//Program to swap two numbers using bitwise operators.
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("a=%d b=%d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf("a=%d b=%d",a,b);
}
