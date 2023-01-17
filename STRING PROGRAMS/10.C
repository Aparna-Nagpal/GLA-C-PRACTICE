//Program to count total number of words in a string.
#include<stdio.h>
void main()
{
    int i,aw=0,d=0;
    char a[]="Aparna Nagpal lives in Agra";
    for(i=0;a[i];i++)
    {
        if(a[i]==' ')
        aw++;
    }
    printf("%d",aw+1);
}
