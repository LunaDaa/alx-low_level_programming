#include "main.h"

/**
*swap_int - swaps the value the pointers a nd b holds
*Return: Nothing
*@temp: a temporary value to hold one of the values athe pointers old to
**/
void swap_int(int *a, int *b)
{
int temp;

temp = *a;
*a = *b;
*b = temp;
}
