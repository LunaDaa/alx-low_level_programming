#include <stdio.h>

/*
*main- print small letters
*Return: returns 0
*/
int main(void)
{
	char alphabets[26];
	
	alphabets[26]= "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i<26;i++)
	{
		putchar(alphabets[i]);
	}
	return(0);
}
