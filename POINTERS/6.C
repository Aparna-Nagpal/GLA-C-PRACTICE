//Program to reverse an array using pointers.
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
    scanf("%d",(p+i));
    printf("Before reversing\n");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
    for(i=0;i<n;i++)
    {
       *(q+n-1-i)=*(p+i);
    }
    printf("\n");
    printf("After reversing\n");
    for(i=0;i<n;i++)
    printf("%d ",*(q+i));
}
