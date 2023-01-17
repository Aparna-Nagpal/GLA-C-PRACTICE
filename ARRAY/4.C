//Program to multiply two matrices,
#include<stdio.h>
int main()
{
    int r,c,i,j,k;
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c],pro[r][c];
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           scanf("%d",&b[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
           pro[i][j]=0;
           for(k=0;k<c;k++)
           pro[i][j]+=a[i][k]*b[k][j];
       }
       printf("\n");
    }
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
       {
          printf("%d",pro[i][j]);
       }
       printf("\n");
    }
    
}
