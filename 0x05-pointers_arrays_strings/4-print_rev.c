#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
int len;
int i;

len = 0;
for (i = 0; i != s[i]; i++)
{
len++;
}
for (i = len-2; i >= 0; i--)
{
putchar(s[i]);
}

}
