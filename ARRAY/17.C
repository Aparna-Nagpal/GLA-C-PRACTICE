//Program to find index as well as delement the number entered by the user
#include <stdio.h>

int main()
{
    int a[5]={1,3,5,7,9},n,l,i;
    scanf("%d",&n);
  
    for(i=0;i<5;i++)
    {
        if(a[i]==n)
        break;
    }
    if(i==5)
    printf("Enter a valid number");
    else
    {
    printf("index=%d\n",i);
    for(l=i;l<5;l++)
    a[l]=a[l+1];
    for(i=0;i<4;i++)
    printf("%d ",a[i]);
    }
    
    return 0;
}
