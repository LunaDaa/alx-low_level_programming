#include "main.h"

/**
reset_to_98-changes the value of the variable it points to 98
Return: Nothing
**/
void reset_to_98(int *n)
{
*n = 98;
}


int main(void)
{
int m;
int *p;

m = 87;
p = &m
reset_to_98(p);
}
