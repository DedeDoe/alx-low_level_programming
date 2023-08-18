#include "main.h"
	/**
	 *_isdigit - Checks for a digit
	 * Description - checks for 0 to 9
	 * Return: 0
	 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
