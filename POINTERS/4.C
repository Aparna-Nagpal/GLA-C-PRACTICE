//Write a program to copy one array to another using pointers.
#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n];
    int*p,*q;
    p=a;
    q=b;
    for(i=0;i<n;i++)
    scanf("%d",&*(p+i));
    for(i=0;i<n;i++)
    *(q+i)=*(p+i);
    for(i=0;i<n;i++)
    printf("%d ",*(q+i));
}
