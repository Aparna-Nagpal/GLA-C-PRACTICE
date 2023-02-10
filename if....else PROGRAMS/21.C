/*
DEVENDRA AND SPORTS difficulty rating:859
Recently, Devendra went to Goa with his friends. Devendra is well known for not following a budget.
He had Rs.Z at the start of the trip and has already spent Rs.Y on the trip. There are three kinds of water sports one can enjoy, with prices Rs.A,B, and C. He wants to try each sport at least once.
If he can try all of them at least once output YES, otherwise output NO.
Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
Each test case consists of a single line of input containing five space-separated integers Z,Y,A,B,C.
Output Format
For each test case, print a single line containing the answer to that test case — YES if Devendra can try each ride at least once, and NO otherwise.
You may print each character of the string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
*/
#include <stdio.h>

int main(void) {
    int t,x,y,a,b,c;
    scanf("%d",&t);
    while(t>0)
    {
        t--;
        scanf("%d%d%d%d%d",&x,&y,&a,&b,&c);
        if(x-y>=a+b+c)
        printf("yes\n");
        else
        printf("no\n");
    }
	
		return 0;
}

