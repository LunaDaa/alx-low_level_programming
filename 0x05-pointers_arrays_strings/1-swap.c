#include "main.h"

/**
*swap_int - swaps the value the pointers a nd b holds
*Return: Nothing
*@a: a pointer to intiger
*@b: a pointer to intiger
**/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
