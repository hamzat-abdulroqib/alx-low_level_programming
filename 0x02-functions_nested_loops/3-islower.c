#include "main.h"
/**
 * _islower - shows 1 if the input is a
 * lower character. Another cases, shows 0
 *
 * @c: The character
 *
 * Return: 1 for lowercase 0 for the rest
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}