#include "main.h"

/**
 * _isalpha - Return 1 if char is uppercase
 * else, return 0
 *
 * @c: character in ASCII mode
 *
 * Return: 1 for uppercase,0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
	return (0);
	}
	_putchar('\n');
}
