#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
int len;
int i;

len = 0;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
for (i = len-2; i >= 0; i--)
{
putchar(s[i]);
}

}
