//Program to find the last occurrence of a character in a string.
#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,f=1,m=0;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;a[i];i++)
    m++;
    for(i=m-1;i>=0;i--)
    {
        if(a[i]==b[0])
        {
            for(j=0;b[j];j++)
            {
                if(a[i+j]!=b[j])
                {
                f=0;
                break;
                }
            }
            if(f==1)
            {
            printf("%d",i+1);
            break;
            }
            
        }
    }
}
