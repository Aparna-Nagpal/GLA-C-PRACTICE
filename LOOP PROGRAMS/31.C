/*
Armstrong Number - An Armstrong Number is a Number which is equal to it’s sum of individual digits raise to the power of number of digits.
For example -
153 is an Armstrong number: here 153 = (1*1*1) + (5*5*5) + (3*3*3).
1634 is an Armstrong number: here 1634 = (1*1*1*1) + (6*6*6*6) + (3*3*3*3) + (4*4*4*4).
If Armstrong then print : "Armstrong Number."
If not Armstrong then print : "Not Armstrong."
*/

int main() {
    int n,k,s=0,l;
    scanf("%d",&n);
    l=n;
    while(n)
    {
        k=n%10;
        n=n/10;
        s=s+k*k*k;
    }
    if(l==s)
        printf("Armstrong Number.");
    else
        printf("Not Armstrong.");
    return 0;
}
