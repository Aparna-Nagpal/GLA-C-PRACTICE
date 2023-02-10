/*
HIGHEST DIVISOR difficulty rating:860
You are given an integer N. Find the largest integer between 1 and 10 (inclusive) which divides N.
Input
The first and only line of the input contains a single integer N.
Output
Print a single line containing one integer ― the largest divisor of N between 1 and 10.
*/

#include <stdio.h>

int main(void) {
	int n,i;
	scanf("%d",&n);
	for(i=10;i>0;i--)
	{
	    if(n%i==0)
	    break;
	}
	printf("%d",i);
	return 0;
}

