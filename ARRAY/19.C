/*
Challenge
Given a list of integers, count and return the number of times each value appears as an array of integers.
Returns
int[100]: a frequency array
*/
int main(){
    int n,i;
    scanf("%d",&n);
    int a[n],b[100];
    for(i=0;i<100;i++)
    b[i]=0; 
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    b[a[i]]++;
    for(i=0;i<100;i++)
    printf("%d ",b[i]);
}
