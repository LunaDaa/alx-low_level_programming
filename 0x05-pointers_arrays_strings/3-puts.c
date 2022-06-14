#include "main.h"
#include <stdio.h>
/**
* _puts- prints string
*Return: nothing
*@str: a variable that holds a string
void _puts(char *str)
{
int i;

for (i = 0; str[i] != '\0'; i++)
{
putchar (str[i]);
}
putchar ('\n');
}
