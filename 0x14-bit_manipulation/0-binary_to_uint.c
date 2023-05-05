#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @c: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *c)
{
	unsigned int ui;
	int len, base_two;

	if (!c)
		return (0);

	ui = 0;

	for (len = 0; c[len] != '\0'; len++)
		;

	for (len--, base_two = 1; len >= 0; len--, base_two *= 2)
	{
		if (c[len] != '0' && c[len] != '1')
		{
			return (0);
		}

		if (c[len] & 1)
		{
			ui += base_two;
		}
	}

	return (ui);
}
