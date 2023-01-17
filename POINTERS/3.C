//Program to input and print array elements using pointer.
#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    int*p;
    p=a;
    for(i=0;i<n;i++)
    scanf("%d",&*(p+i));
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
}
