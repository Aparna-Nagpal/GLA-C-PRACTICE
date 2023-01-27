/* Program to print the followung pattern using single for loop
1
12
123
1234
12345
*/
#include <stdio.h>
int main() {
   int i, j=0;
   int n = 5;
   for ( i = 1; i <= n; ) {
      if( j <i ) {
         printf("%d",++j);
         
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
