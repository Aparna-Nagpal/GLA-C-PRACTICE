//Program to check whether character is an alphabet or not.
#include<stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   ((a>'a'&&a<'z')||(a>'A'&&a<'Z'))?printf("Yes"):printf("No");
}
