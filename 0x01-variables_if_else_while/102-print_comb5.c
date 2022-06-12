#include<stdio.h>
/**
*main- prints ...
*Return: Returns 0
**/
int main(void)
{
int i;
int j;

for (i = 0; i < 100; i++)
{
for (j = i + 1; j < 100; j++)
{
if (i < 10)
putchar(0 + '0');
putchar(i + '0');
putchar(' ');
if (i < 10)
putchar(0 + '0');
putchar(j + '0');

if (i == 98 && j == 99)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
