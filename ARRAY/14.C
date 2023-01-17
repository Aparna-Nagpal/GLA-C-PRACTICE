//Program to find determinant of a matrix.
#include<stdio.h>
int main()
{
    int n,i,j,f=1;
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
        
      if(i==j && a[i][j]!=1)
      {f=0;
      break;}
      else if(i!=j && a[i][j]!=0)
      {
          f=0;
          break;
      }
    }
    }
    if(f==1)
    printf("Identity Matrix");
    else
    printf("Not an Identity Matrix");
}

