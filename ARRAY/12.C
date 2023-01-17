//Program to find sum of lower triangular matrix.
#include<stdio.h>
int main()
{
    int r,s=0,i,j;
    scanf("%d",&r);
    int a[r][r];
    for(i=0;i<r;i++)
    {
       for(j=0;j<r;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<r;j++)
       {
           if(j<=i)
           s+=a[i][j];
       }
    }
    printf("%d",s);
}
