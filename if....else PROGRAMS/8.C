//Program to input an alphabet and check whether it is vowel or consonant.
#include<stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   if(a=='a'||a=='A'||a=='E'||a=='e'||a=='I'||a=='i'||a=='O'||a=='o'||a=='U'||a=='u')
   printf("Vowel");
   else
   printf("Consonant");
}
