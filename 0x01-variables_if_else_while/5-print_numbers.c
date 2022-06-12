#include<stdio.h>
/**
*main- Prints numbers from 0 to 9
*Return: Always returns 0
**/
int main(void)
{
int i;

for (i = 0; i <= 9; i++)
{
printf ("%d", i);
fflush(stdout);
}
putchar('\n');
return (0);
}
