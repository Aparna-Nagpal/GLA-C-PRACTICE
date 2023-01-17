//Program to create initialize and use pointers.
#include<stdio.h>
void main()
{
    int a=10;
    int*p; //Create
    p=&a; //initialize
    printf("Value of a=%d and address of a=%p",*p,p); //Use   
}
Value of a=10 and address of a=0x7ffe51d43a5c
Program to add two numbers using pointers.
#include<stdio.h>
void main()
{
    int a=10,b=12;
    int*p,*q; 
    p=&a;
    q=&b;
    printf("sum=%d",*p+*q);   
}
