//Program to find sum of each row and column of a matrix.
#include<stdio.h>
int main()
{
    int r,sc=0,sr,i,j;
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
        sr=0;
    for(j=0;j<r;j++)
       {
           sr+=a[i][j];
       }
       printf("%d ",sr);
    }
    printf("\n");
    for(i=0;i<r;i++)
    {
        sc=0;
    for(j=0;j<r;j++)
       {
           sc+=a[j][i];
       }
       printf("%d ",sc);
    }
}
