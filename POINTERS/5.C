//Program to swap two arrays using pointers.
#include<stdio.h>
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],b[n],c[n];
    int*p,*q,*r;
    p=a;
    q=b;
    r=c;
    for(i=0;i<n;i++)
    scanf("%d",(p+i));
    for(i=0;i<n;i++)
    scanf("%d",(q+i));
    printf("Before swapping\n");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",*(q+i));
    for(i=0;i<n;i++)
    {
        *(r+i)=*(p+i);
        *(p+i)=*(q+i);
        *(q+i)=*(r+i);
    }
    printf("\n");
    printf("After swapping\n");
    for(i=0;i<n;i++)
    printf("%d ",*(p+i));
    printf("\n");
    for(i=0;i<n;i++)
    printf("%d ",*(q+i));
}
