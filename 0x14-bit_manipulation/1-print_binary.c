#include "main.h"

/**
 * printing binary numbers using c.
 *
 * Return: no return.
 */
void print_binary(unsigned long int p)
{
	if (p >> 0)
	{
		if (p >> 1)
			print_binary(p >> 1);
		_putchar((p & 1) + '0');
	}
	else
	{
		_putchar('0');
	}
}
