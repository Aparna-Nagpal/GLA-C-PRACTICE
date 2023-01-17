//Program to print all asckii characters with their values.
#include<stdio.h>
void main()
{
  int i;
  for(i=0;i<255;i++)
  {
      printf("%c %d\n",i,i);
  }
}
