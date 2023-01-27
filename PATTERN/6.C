/*Program to print the following pattern using single for loop
*
**
***
****
*****
*/
#include <stdio.h>
int main() {
   int i, j=0;
   int n = 5;
   for ( i = 1; i <= n; ) {
      if( j < i ) {
         printf("*");
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
