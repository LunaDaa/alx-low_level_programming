#include "main.h"
/**
*_strlen- returns length of a string
*Return: returns the length of a string
**/
int _strlen(char *s)
{
int i;
int len;

len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}
