#include <stdio.h>
/**
  *main-c program that prints the size of various types 
  *return: 0(Success)
  */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of an int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %lu\n", sizeof(long long int));
	printf("Size of a float: %lu", sizeof(float));
	return (0);
}
