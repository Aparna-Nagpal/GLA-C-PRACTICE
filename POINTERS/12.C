//Program to concatenate two strings using pointers.
#include<stdio.h>
void main()
{
    char a[]="Aparna ",b[]="Nagpal",c[100];
    char *p,i,*q,*r,j;
    p=a;
    q=b;
    r=c;
    for(i=0;a[i];i++)
    {
        *(r+i)=*(p+i);
    }
    for(j=0;b[j];j++)
    *(r+j+i)=*(q+j);
    for(j=0;r[j];j++)
    printf("%c",r[j]);
}
