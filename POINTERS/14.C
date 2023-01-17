//Program to return multiple values from a function using pointers.
#include<stdio.h>
void func(int*,int*);
void main()
{
    int a=8,b=9;
    int*p,*q;
    p=&a,q=&b;
    printf("a=%d b=%d\n",a,b);
    func(p,q);
    printf("a=%d b=%d",a,b);
}
void func(int*l,int*m)
{
    *l=1;
    *m=2;
}
