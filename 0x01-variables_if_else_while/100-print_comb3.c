#include<stdio.h>
/**
*main- prints all possible different combinations of two digits.
*      The two digits must be different
*      01 and 10 are considered the same combination of the two digits 0 and 1
*      Print only the smallest combination of two digits
*      Numbers should be printed in ascending order, with two digits
*Return: Returns 0
**/
int main(void)
{
int i;
int j;

for (i = 0; i <10; i++)
{
for (j = i+1; j < 10; j++)
{
putchar(i + '0');
putchar(j + '0');
if (i == 8 && j == 9)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
