#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- The functions create a rundom number and
*prints its last digit and weather it is greater than 5, zero or less than 6
*Return: Returns zero
**/
int main(void)
{
	int n;
        char m;
	char string_n[20];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	sprintf(string_n, "%d", n);
	char string_last_digit = string_n[-1];
	int last_digit = int(string_last_digit);
	if (last_digit > 5)
		m = "greater than 5";
	else if (last_digit == 0)
		m = "0";
	else
		m = "less than 6 and not 0";
	printf("Last digit of %d is %d and is %s", n, last_digit, m);
	return (0);
}
