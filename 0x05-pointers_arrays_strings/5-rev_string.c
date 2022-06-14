#include "main.h"
#include <stdio.h>

/**
*rev_string-reverses string 
*Return: nothing
*@s: a string variable
**/
void rev_string(char *s)
{
int len;
int i;
int no_of_swaps;
int temp;

len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
no_of_swaps = len / 2;
for (i = 0; i < no_of_swaps; i++)
{
temp = s[i];
s[i] = s[len - 1 - i];
s[len - 1 - i] = temp;
}
}
