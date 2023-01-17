//Program to count all the occurrences of a character in a string.
#include<stdio.h>
void main()
{
    char a[100],b[100];
    int i,j,f=1,l=0;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;a[i];i++)
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
            l++;
            }
        }
    }
    printf("%d",l);
}
