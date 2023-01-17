//Program to find sum of minor diagonal elements.

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
           s+=a[i][r-i-1];
       }
   printf("%d",s);
}
