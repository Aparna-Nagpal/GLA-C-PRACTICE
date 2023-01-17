//Program to compare two strings using pointers.
#include<stdio.h>
void compr(char*,char*);
void main()
{
   char a[50],b[50];
   scanf("%s %s",a,b);
   char *p,*q;
   p=a;
   q=b;
   compr(p,q);
}
void compr(char p[],char q[])
{
    int i,max,j=0,s=0,r=0;
    for(i=0;p[i];i++)
    s++;
    for(i=0;q[i];i++)
    r++;
    max=r>=s?r:s;
    for(i=0;i<max;i++)
    {
        j++;
        if(p[i]!=q[i])
        {
            if(p[i]>q[i])
            printf("positive");
            else
            printf("negative");
            break;
        }
        if(j==max)
            printf("equal");
    }
}
