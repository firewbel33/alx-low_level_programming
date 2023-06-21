#include "main.h"

/**
 * _islower - check for lowercase
 *
 * @c: The character to be checked
 * Return: 1 for lower case character or 0 for eny thing else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
