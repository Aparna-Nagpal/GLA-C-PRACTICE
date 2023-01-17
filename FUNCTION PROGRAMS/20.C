//Program to find sum of array elements.
#include<stdio.h>
int sum(int*m,int n)
{
    int i,s=0;
    for(i=0;i<n;i++)
    {
      s+=m[i];
    }
    return(s);
}
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("%d",sum(a,n));
}
