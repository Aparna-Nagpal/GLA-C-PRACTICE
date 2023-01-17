//Program to find length of string using pointers.
#include<stdio.h>
void main()
{
    char a[]="Aparna";
    char *p,l=0,i;
    p=a;
    for(i=0;a[i];i++)
    {
        l++;
    }
    printf("%d",l);
}
