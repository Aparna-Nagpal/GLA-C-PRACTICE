//Program to find total number of alphabets, digits or special character in a string.
#include<stdio.h>
void main()
{
    int i,aw=0,d=0,s=0;
    char a[]="aPArna154$*";
    for(i=0;a[i];i++)
    {
        if((a[i]<='z'&&a[i]>='a')||(a[i]<='Z'&&a[i]>='A'))
        aw++;
        else if(a[i]>='0'&&a[i]<='9')
        d++;
        else
        s++;
    }
    printf("Alphabets=%d\nDigits=%d\nSpecial characters=%d",aw,d,s);
}
