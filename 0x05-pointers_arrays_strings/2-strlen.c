#include "main.h"

int _strlen(char *s){
int i;
int len;
for (i = 0; s[i] != '\0'; i++)
{
len++;
}
return (len);
}
