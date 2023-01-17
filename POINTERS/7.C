//Program to search an element in an array using pointers.
#include<stdio.h>
void main()
{
    int n,i,f,t,d=0;
    printf("Number of elements in an array");
    scanf("%d",&n);
    int a[n];
    int*p;
    p=a;
    printf("\nArray");
    for(i=0;i<n;i++)
    scanf("%d",(p+i));
    
    printf("\nNumber to be searched");
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        d++;
        if(*(p+i)==t)
        break;
    }
    if(d==n)
    printf("Number is found at index %d of array",i);
    else
    printf("Not found");
}
