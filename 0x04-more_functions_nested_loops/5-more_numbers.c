#include "main.h"

/**
 *more_numbers -Function that prints more numbers
 *Description -Prints from 0 to 14 three times
 *Return: Always 0
 **/

void more_numbers(void)
{
	int i;
	int j;
	
	i = 0;
	while (i < 10)
	{
		for (j = 0; j < 15; j++)
			{
				if (j > 9)
			       	{
                		_putchar((j / 10) + '0');
                		_putchar((j % 10) + '0');
            			}
				else
			       	{
                		_putchar(j + '0');
				}
			}	
				_putchar('\n');
				i++;
	}
}
