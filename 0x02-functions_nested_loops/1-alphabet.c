#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: Always 0
 */
void print_alphabet(void);
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	
	_putchar('\n');

	return (0);
}
