//Program to check Symmetric Matrix.
#include<stdio.h>
int main()
{
    int n,i,j,o=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
           scanf("%d",&a[i][j]);
       }
       printf("\n");
    }
    for(i=0;i<n;i++)
    {
    for(j=0;j<n;j++)
    {
        if(a[i][j]==a[j][i])
        o++;
        else 
        break;
    }
    }
    if(o==n*n)
    printf("Symmetric Matrix");
    else
    printf("Not a Symmetric Matrix"); 
}
