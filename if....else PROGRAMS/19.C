/*
PROGRAMMING LANGUAGES
Chef is a software developer, so he has to switch between different languages sometimes. Each programming language has some features, which are represented by integers here.
Currently, Chef has to use a language with two given features A and B. He has two options --- switching to a language with two features A1andB1, or to a language with two features A2and B2.
All four features of these two languages are pairwise distinct.
Tell Chef whether he can use the first language, the second language or neither of these languages (if no single language has all the required features).
Input Format
The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains six space-separated integers A,B,A1,B1,A2,B2.
Output Format
For each test case, print a single line containing the integer 1 if Chef should switch to the first language, or 2 if Chef should switch to the second language, or 0 if Chef cannot switch to either language.
*/

#include <stdio.h>

int main(void) {
	
	int t,a,b,c,d,e,f;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	    if((a==c||a==d)&&(b==c||b==d))
	    printf("1\n");
	    else if((a==e||a==f)&&(b==e||b==f))
	    printf("2\n");
	    else
	    printf("0\n");
	}
	
	return 0;
}
