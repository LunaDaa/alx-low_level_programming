#include<stdio.h>
#include<string.h>
#include"main.h"
/**
*main- prints _putchar
*Return: returns 0
**/
int _putchar(char hello)
{
int i;
for (i = 0; i < 8; i++)
{
putchar(hello[i]);
}
return (0);
}
int main(void)
{
char hello[9];
strcpy(hello, "_putchar");
_putchar();
return(0);
}
