//Program to count total number of vowels and consonants in a string.
#include<stdio.h>
void main()
{
    int i,aw=0,d=0;
    char a[]="aPArnaiot";
    for(i=0;a[i];i++)
    {
        if(a[i]=='a'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        aw++;
        else 
        d++;
    }
    printf("Vowels=%d\nConsonants=%d",aw,d);
}
