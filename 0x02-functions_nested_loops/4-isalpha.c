#include "main.h"

/**
 * _isalpha - checks for alphabetic chracters
 *
 * @c: The character to be checked
 * Return: 1 if c is a letter, 0 character
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
