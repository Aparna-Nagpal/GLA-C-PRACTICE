//Program to access two dimensional array using pointers.
#include<stdio.h>
void main()
{
    int a[2][3]={{1,2,3},{7,8,9}};
    int (*p)[3];
    p=a;
    printf("first row element=%d",**p);
}
First row element=1

Program to add two matrices using pointers.
#include<stdio.h>
void main()
{
   int r,c,i,j;
   scanf("%d%d",&r,&c);
   int a[r][c],b[r][c];
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
   int (*p)[c],(*q)[c];
   p=a;
   q=b;
   for(i=0;i<r;i++)
   {
   for(j=0;j<c;j++)
   {
      printf("%d",*(*(p+i)+j)+*(*(q+i)+j)); 
   }
   printf("\n");
   }
}
