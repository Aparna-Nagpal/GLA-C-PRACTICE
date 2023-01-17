//Program to check two matrices are equal or not.
#include<stdio.h>
int main()
{
    int r,c,i,j,f=1;
    scanf("%d%d",&r,&c);
    int a[r][c],b[r][c];
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
           if(a[i][j]!=b[i][j])
           {
               f=0;
               break;
           }
       }
       
    }
    if(f==1)
    printf("EQUAL");
    else
    printf("NOT EQUAL");
    
}
