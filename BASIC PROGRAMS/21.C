/*
CHEF AND PROFITS difficulty rating:889
Some time ago, Chef bought X stocks at the cost of Rs.Y each. Today, Chef is going to sell all these X stocks at Rs. Z each. What is Chef's total profit after he sells them?
Chef's profit equals the total amount he received by selling the stocks, minus the total amount he spent buying them.
Input Format
The first line of input contains an integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains three space-separated integers X,Y and Z — the number of stocks, the price they were bought at, and the price they can be sold at, respectively.
Output Format
For each test case print on a new line a single integer — Chef's profit after selling all the stocks he has.
*/
#include <stdio.h>

int main(void) {
	int t,a,b,c;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    scanf("%d%d%d",&a,&b,&c);
	    printf("%d\n",a*c-a*b);
	}
	return 0;
}

