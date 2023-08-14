#include <stdio.h>
/**
 *main -Entry Point
 *Description -This program prints alphabets in lowercase
 *Return: Always 0 successful
 **/

int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	putchar(i);
	putchar(10);
	return (0);
}
