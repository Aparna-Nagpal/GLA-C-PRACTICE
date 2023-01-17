//Program to find maximum and minimum between two functions.
#include<stdio.h>
int max(int m,int n)
{
    return(m>n?m:n);
}
int min(int p,int q)
{
    return(p<q?p:q);
}
int main(){
    int a,b;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    printf("Maximum=%d\nMinimum=%d",max(a,b),min(a,b));
}
