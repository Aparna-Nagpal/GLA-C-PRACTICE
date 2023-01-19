//Program to find the last occurrence of a word in a string

#include<stdio.h>
void main()
{
    int i,n=0,p=1,t,g=0,h=0,y,o,l=0;
    char a[100],b[100];
    scanf("%[^\n]d",a);
    scanf(" %s",b);
    for(i=0;b[i];i++)
    g++;
    for(i=0;a[i];i++)
    h++;
    for(i=h-1;i>=0;i--)
    {
        p=1;
        if(a[i]==b[0])
        {
            for(t=0;b[t];t++)
            {
            if(a[i+t]!=b[t])
            p=0;
            }
            if(p==1)
            break;
        }
    
    }
    if(p==1&&i==-1)
    printf("Not found");
    else
    printf("%d",i+1);
}


