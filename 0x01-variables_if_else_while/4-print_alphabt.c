#include<stdio.h>
/**
*main- Printa all small letter alphabets exceppt q and e
*Return: Always returns 0
**/
int main(void)
{
  char i;
  
  for (i = 'a'; i <= 'z'; i++)
  {
    if (i == 'e' || i == 'q')
      continue;
    putchar (i);
  }
  putchar ('\n');
  return (0);
  
}
