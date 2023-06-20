#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 * Return: void
 */
void print_alphabet_x10(void)
{
	char ch;
	int t;

	t = 0;

	while (t < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');

		t++;
	}
}
