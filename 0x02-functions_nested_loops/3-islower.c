#include "main.h"

/**
 * islower - checks for lowercase characters
 * @c: character to check
 * Return: 1 if lowercase, 0 if uppercase
 */

int_islower(int c)
{
	if (c >= 'a && c<= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
