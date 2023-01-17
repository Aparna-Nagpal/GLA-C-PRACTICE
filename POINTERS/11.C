//Program to copy one string to another using pointers.
#include<stdio.h>
void main()
{
    char a[]="Aparna",b[100];
    char *p,i,*q;
    p=a;
    q=b;
    for(i=0;a[i];i++)
    {
        *(q+i)=*(p+i);
    }
    for(i=0;b[i];i++)
    printf("%c",q[i]);
}
