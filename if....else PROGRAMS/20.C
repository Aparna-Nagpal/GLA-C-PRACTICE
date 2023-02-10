/*
AREA OR PERIMETER difficulty rating:
Write a program to obtain length (L) and breadth (B) of a rectangle and check whether its area is greater or perimeter is greater or both are equal.
Input Format
First line will contain the length (L) of the rectangle.
Second line will contain the breadth (B) of the rectangle.
Output Format
Output 2 lines.
In the first line print "Area" if area is greater otherwise print "Peri" and if they are equal print "Eq".(Without quotes).
In the second line print the calculated area or perimeter (whichever is greater or anyone if it is equal).
*/

#include <stdio.h>

int main(void) {
	int l,b,a,p;
	scanf("%d%d",&l,&b);
	a=l*b;
	p=2*(l+b);
	if(a>p)
	printf("Area\n%d",a);
	else if(p>a)
	printf("Peri\n%d",p);
	else
	printf("Eq\n%d",a);
	return 0;
}

