#include <stdio.h>
/**
 *main -Entry Point
 *Description -This program prints alphabets in lowercase
 *Return: Always 0 successful
 **/

int main(void)
{
int i = 97;
int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	while (j < 91)
	{
		putchar(j);
		j++;
	}
		putchar(10);
	return (0);
}
