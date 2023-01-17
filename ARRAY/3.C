//Program to perform scalar matrix multiplication.
#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int multiplier;
    scanf("%d",&multiplier);
    int a[r][c];
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
           printf("%d",multiplier*a[i][j]);
       }
       printf("\n");
    }
}
