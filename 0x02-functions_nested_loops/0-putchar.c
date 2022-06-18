#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*main- prints _putchar
*Return: returns 0
**/
int _putchar(void)
{
char hello[9];
int i;

strcpy(hello, "_putchar");
for (i = 0; i < 8; i++)
{
putchar(hello[i]);
}
putchar('\n');
return (0);
}

