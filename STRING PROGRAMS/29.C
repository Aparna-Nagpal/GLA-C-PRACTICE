//Program to count number of words in a string
#include <stdio.h>

int main()
{
    int i,s=0;
    char a[100];
    scanf("%[^\n]s",a);
    for(i=0;a[i];i++)
    if(a[i]==' ')
    s++;
    printf("%d",s+1);

    return 0;
}
