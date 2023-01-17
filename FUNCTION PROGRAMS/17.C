//Program to find gcd of numbers using functions.
#include<stdio.h>
int gcd(int m,int n){
    int i,k,l=0;
    k=m>n?n:m;
    for(i=k;i>0;i--)
    {
      l++;
      if(m%i==0 && n%i==0)
      break;
    }
    return(i);
}
void main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}
