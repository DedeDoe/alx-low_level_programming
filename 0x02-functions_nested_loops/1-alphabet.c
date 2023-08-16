#include "main.h"

/**
 *print_alphabet -Entry point
 *Description - Prints alphabets in lowercase
 *Return: Always 0 successful
 **/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
		_putchar('\n');
}

