#include <stdio.h>
/**
 * main - Entry point
 * Discription: 'print alphabets lowercase and upercase'
 * Return: Always 0 (Success)
 */
int main(void)
{
       int n = 97;
       int k = 65;

       while (n <= 122)
       {
	       putchar(n);
       }
       while (k <= 90)
       {
	       putchar(k);
       }
       putchar('\n');
       return (0);
}
