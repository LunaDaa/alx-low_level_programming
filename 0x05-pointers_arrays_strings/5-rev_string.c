#include "main.h"
#include <stdio.h>

/**
*print_rev-prints string in reverse form
*Return: nothing
*@s: a string variable
**/
void rev_string(char *s)
{
int len;
int i;
int j;

len = 0;
j = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
char temp[len];
for (i = len - 1; i >= 0; i--)
{
temp[j] =s[i];
j++;
}
s = temp;
}
