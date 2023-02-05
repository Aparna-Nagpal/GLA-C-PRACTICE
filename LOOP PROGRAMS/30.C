//Program to find factorial of a number entered by the user
int main() {
    int n,i,p=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       p=p*i; 
    }
    printf("%d",p);
    return 0;
}
