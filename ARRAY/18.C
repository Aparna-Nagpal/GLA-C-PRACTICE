/*
Input Format
The first line contains a single integer n , the number of rows and columns in the square matrix arr.
Each of the next n lines describes a row arr[i], and consists of n space-separated integers arr[i][j] .
Output Format
Return the absolute difference between the sums of the matrix's two diagonals as a single integer.
*/
int main(){
    int a,s=0,p=0,i,j;
    scanf("%d",&a);
    int b[a][a];
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            s=s+b[i][j];
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i+j==a-1)
            p=p+b[i][j];
        }
    }
    if(p-s>=0)
    printf("%d",p-s);
    else
    printf("%d",s-p);
}
