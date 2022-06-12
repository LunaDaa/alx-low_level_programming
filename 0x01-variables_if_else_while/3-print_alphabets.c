#include<stdio.h>
/**
*main- prints all small letter alphabets followed by
*      capital letters alphabet
*Returns- Always returns 0       
**/
int main()
{
  char i;
  char j;
  
  for (i = 'a'; i <= 'z'; i++)
  {
    putchar (i);
  }
  for (j = 'A'; j <= 'Z'; i++)
  {
    putchar (j);
  }
  putchar ('\n');
  return (0);
}
