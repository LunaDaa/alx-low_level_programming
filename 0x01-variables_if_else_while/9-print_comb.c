#include<stdio.h>
/**
*main- prints all possible combination of single digit number
*Return returns 0
**/
int main(void)
{
int i;

for (i = 0; i <=9; i++)
{
putchar(i);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
