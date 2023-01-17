//Program to find Maximum and Minimum elements in an array using functions.
#include<stdio.h>
int max(int*m,int n)
{
    int i,s=0,max;
    max=m[0];
    for(i=1;i<n;i++)
    {
      if(m[i]>max)
      max=m[i];
    }
    return(max);
}
int min(int*m,int n)
{
    int i,s=0,min;
    min=m[0];
    for(i=1;i<n;i++)
    {
      if(m[i]<min)
      min=m[i];
    }
    return(min);
}
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("Max=%d",max(a,n));
    printf("\n");
    printf("Min=%d",min(a,n));
}
