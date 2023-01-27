/*
Program to print the following pattern using single for loop
0
01
011
0112
01122
*/

#include <stdio.h>
int main() {
   int i, j=0,r;
   int n = 5;
   for ( i = 1; i <= n; ) {
       
      if( j <i ) {
          if(j==0)
          r=0;
          if(j==1||j==2)
          r=1;
          if(j==3||j==4)
          r=2;
         
         printf("%d",r);
         j++;
         continue;
      }
      if(j == i) {
         printf(" ");
         j = 0;
         i++;
      }
      printf("\n");
   }
   return 0;
}
