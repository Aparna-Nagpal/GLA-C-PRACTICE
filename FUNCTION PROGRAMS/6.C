//Program to find perfect numbers between a given range using functions.
#include<stdio.h>
void perfect(int m,int n)
{
    int i,p,s,j;
    for(i=m;i<=n;i++)
    {
        
       s=0;
       for(j=1;j<=i/2;j++)
       {
           if(i%j==0)
           s+=j;
       }
       if(s==i)
       printf("%d ",i);
      
    }
}
void main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    perfect(a,b);
}
