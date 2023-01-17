//Program to find sum of digits using functions.
#include<stdio.h>
int sum(int m){
    int s=0,k,j;
    j=m;
    while(m>0)
    {
        k=m%10;
        s=s+k;
        m=m/10;
    }
    return(s);
}
void main(){
    int a;
    scanf("%d",&a);
    printf("%d",sum(a));
}
