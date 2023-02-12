/*
CHEF AND HAIR SALON difficulty rating:895
Chef recently realized that he needs a haircut, and went to his favorite hair salon. At the salon, he found N customers waiting for their haircuts. From his past experience, Chef knows that the salon takes M minutes per customer. Only one person can get their haircut at a time.
For how many minutes will Chef have to wait before he can get his haircut?
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains two space-separated integers N and M, as described in the problem.
Output Format
For each test case, print a single line containing one integer — the number of minutes that Chef will have to wait before he can get his haircut.
*/
#include <stdio.h>

int main(void) {
	int t,a,b;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d",&a,&b);
	    printf("%d\n",a*b);
	}
	return 0;
}

