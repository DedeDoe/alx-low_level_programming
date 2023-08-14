#include <stdio.h>
/**
 *main -Entry Point
 *Description -This program prints alphabets in lowercase
 *Return: Always 0 successful
 **/

int main(void)
{
int a;

for (a = 97; a <= 122; a++)
{
	if (a == 101 || a == 113)
	{
	continue;
	}
	putchar(a);
	}
	putchar(10);
	return (0);

}
