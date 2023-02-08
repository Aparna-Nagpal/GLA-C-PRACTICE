/*
CHEF AND HAPPY STRING
Chef has a string S with him. Chef is happy if the string contains a contiguous substring of length strictly greater than 2 in which all its characters are vowels.
Determine whether Chef is happy or not.
Note that, in english alphabet, vowels are a, e, i, o, and u.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, a string S.
Output Format
For each test case, if Chef is happy, print HAPPY else print SAD.
You may print each character of the string in uppercase or lowercase (for example, the strings hAppY, Happy, haPpY, and HAPPY will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
	
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	   int k=0,i;
	   t--;
	   char c[1000];
	   scanf("%s",c);
	   for(i=0;c[i];i++)
	   {
	       if((c[i]=='a')||(c[i]=='e')||(c[i]=='i')||(c[i]=='o')||(c[i]=='u'))
	               {
	                   k++;
	                   if(k>2)
	                   {
	                       printf("Happy\n");
	                       break;
	                   }
	               }
	       else
	       k=0;
	   }
	   if(k<=2)
	   printf("Sad\n");
	}
	return 0;
}

