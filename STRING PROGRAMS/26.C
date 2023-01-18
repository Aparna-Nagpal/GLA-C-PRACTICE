//Program to find the first occurence of a word in a string.
#include<stdio.h>
void main()
{
    int i,n=0,p=1,t,g=0,h=0,y,o;
    char a[100],b[100];
    scanf("%[^\n]d",a);
    scanf(" %s",b);
    for(i=0;b[i];i++)
    g++;
    for(i=0;a[i];i++)
    h++;
    for(i=0;a[i];i++)
    {
        if(a[i]==b[0])
        {
            for(t=0;b[t];t++)
            if(a[i+t]!=b[t])
            p=0;
            if(p==1)
            break;
        }
    }
    printf("%d",i+1);
}
