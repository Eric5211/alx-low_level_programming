#include "main.h"

/**
 *print_sign - Print sign
 *@n: Variable
 *Return: 0 success
 */

int print_sign(int n)
{
	if (n > 0)
	{
	putchar('+');
		return (1);
	}
	else if (n == 0)
	{
	putchar('0');
		return (0);
	}
	else
	{
	putchar('-');
		return (-1);
	}
}
