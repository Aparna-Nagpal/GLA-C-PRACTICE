//Program to find transpose of a matrix.
#include<stdio.h>
int main()
{
    int r,s=0,i,j,c;
    scanf("%d%d",&r,&c);
    int a[r][c];
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<c;i++)
    {
       for(j=0;j<r;j++)
       {
           printf("%d",a[j][i]);
       }
       printf("\n");
    }}
