//Program to swap two numbrers using pointers.
#include<stdio.h>
void main()
{
    int a=10,b=12,temp;
    int*p,*q; 
    p=&a;
    q=&b;
    printf("a=%d b=%d\n",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("a=%d b=%d",*p,*q);
}
