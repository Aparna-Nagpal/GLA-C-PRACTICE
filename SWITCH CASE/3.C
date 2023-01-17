//Program to check whether the alphabet is a vowel or consonant.
#include<stdio.h>
int main()
{
   char a;
   scanf("%c",&a);
   switch(a)
   {
        case 'A':printf("vowel");break;
        case 'E':printf("vowel");break;
        case 'i':printf("vowel");break;
        case 'O':printf("vowel");break;
        case 'u':printf("vowel");break;
        case 'U':printf("vowel");break;
        case 'e':printf("vowel");break;
        case 'a':printf("vowel");break;
        case 'I':printf("vowel");break;
        case 'o':printf("vowel");break;
        default:printf("Consonant");
   }
}
