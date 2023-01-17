//Program to find all the occurrences of a character in a string.
void main()
{
    char a[100],b[100];
    int i,j,f=1;
    scanf("%[^\n]s",a);
    scanf("%s",b);
    for(i=0;a[i];i++)
    {
        if(a[i]==b[0])
        {
            for(j=0;b[j];j++)
            {
                if(a[i+j]!=b[j])
                {
                f=0;
                break;
                }
            }
            if(f==1)
            {
            printf("%d ",i+1);
            }
            
        }
    }
}
