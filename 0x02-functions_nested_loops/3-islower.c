#include "main.h"

/**
 * _islower - Returns 1 if c is lowercase
 * else, return 0 if others
 *
 * @c: The character in ASCII code
 *
 *Return: 1 lowercase. 0 for others
 */

int _islower(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
_putchar('\n');
}
