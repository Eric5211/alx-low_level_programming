#include "main.h"

/**
 *print_alphabet - prints the alphabet in lowercase followed by new line
 *
 * Return: 0 success
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
	putchar(alp);
	}
	putchar('\n');
}
