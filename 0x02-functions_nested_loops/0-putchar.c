#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*print_putchar- prints _putchar
*Return: returns 0
**/
int print_putchar(void)
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
/**
*main- calls prints _putchar
*Return: returns 0
**/
int main(void)
{
print_putchar();
return (0);
}

