#include <stdio.h>
/**
*puts2- prints every other character of a string
*return: Nothing
*@str: a string variable
**/
void puts2(char *str)
{
int i;

for (i = 0; i != '\0'; i+=2)
{
putchar (str[i]);
}
putchar ('\n');
}
