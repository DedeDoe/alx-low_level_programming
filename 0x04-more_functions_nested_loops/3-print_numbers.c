#include "main.h"

/**
 *print_numbers -Entry Point
 *Description -Prints 0 to 9
 *Return: Always 0
 **/

void print_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}
		_putchar(10);
}
