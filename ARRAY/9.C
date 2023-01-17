//Program to find upper triangular matrix.
#include<stdio.h>
int main()
{
    int r,sc=0,i,j;
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
           if(j>=i)
           printf("%d",a[i][j]);
           else
           printf(" ");
       }
       printf("\n");
    }  }
