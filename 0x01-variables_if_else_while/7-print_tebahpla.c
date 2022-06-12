#include<stdio.h>
/**
*main- prints small letter alphabets in reverse order
*Return: Returns 0
**/
int main(void)
{
char i;

for (i = 'z'; i >= 'a'; i--)
{
putchar(i);
}
putchar('\n');
return (0);
}
