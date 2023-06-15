#include <stdio.h>
 /**
  * main - a program that prints the size of various types
  * return: 0
  */
 int main(void)
{
	printf("Size of the char: %lu byte(s)\n", sizeof(char));
	printf("Size of the int: %lu byte(s)\n", sizeof(int));
	printf("Size of the long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of the long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of the float: %lu byte(s)", sizeof(float));
	return (0);
}
