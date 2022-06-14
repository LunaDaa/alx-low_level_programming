#include "main.h"
#include <stdio.h>
void print_rev(char *s)
{
int len;
int i;

len = _strlen(*s);
for (i = len; i >= 0; i--)
{
putchar(s[i]);
}

}
