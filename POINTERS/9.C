//Program to multiply two matrices using pointers.
#include<stdio.h>
void main(){
   int r,c,i,j,k;
   scanf("%d%d",&r,&c);
   int a[r][c],b[r][c],d[r][c];
   for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   {
       scanf("%d",&a[i][j]);
   }
   for(i=0;i<r;i++)
   for(j=0;j<c;j++)
   {
       scanf("%d",&b[i][j]);
   }
   int (*p)[c],(*q)[c],(*u)[c];
   p=a;
   q=b;
   u=d;
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
      *(*(u+i)+j)=0;
      for(k=0;k<c;k++)
      *(*(u+i)+j)+=*(*(p+i)+k) * *(*(q+k)+i); 
      printf("%d ",*(*(u+i)+j));
   }
   printf("\n");
   }}
