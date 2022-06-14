#include "main.h"
#include <stdio.h>

/**
*print_rev-prints string in reverse form
*Return: nothing
*@s: a string variable
**/
void print_rev(char *s)
{
int len;
int i;

len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
for (i = len - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
