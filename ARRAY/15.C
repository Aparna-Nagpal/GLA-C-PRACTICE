//Program to check Sparse Matrix.
#include<stdio.h>
int main(){
    int n,i,j,o=0,z=0;
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
        if(a[i][j]==1)
        o++;
        else if(a[i][j]==0)
        z++;
    }
    }
    if(z>o)
    printf("Sparse Matrix");
    else
    printf("Not a Sparse Matrix");}
