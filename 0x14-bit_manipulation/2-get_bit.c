#include "main.h"

/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @m: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int m, unsigned int index)
{
	unsigned int i;

	if (m == 0 && index < 64)
		return (0);

	for (i = 0; i <= 63; m >>= 1, i++)
	{
		if (index == i)
		{
			return (m & 1);
		}
	}

	return (-1);
}
