//Program to display all array elements using functions.
#include<stdio.h>
void ele(int*m,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
      printf("%d",m[i]);
    }
}
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    ele(a,n);
}
