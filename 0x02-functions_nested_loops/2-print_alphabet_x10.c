#include "main.h"

/**
 * print_alphabet_x10 - prints alpha 10 times
 */
void print_alphabet_x10(void)
{
	int t;
	char ch;

	for (t = 0; t <= 9; t++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);

		-putchar('\n');
	}
}
