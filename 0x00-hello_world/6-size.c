#include <stdio.h>
 /**
  * main - a program that prints the size of various types
  * return: 0
  */
 int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
printf("Size of the char: %zu byte(s) \n", (unsigned long) sizeof(a));
printf("Size of the int: %zu byte(s) \n", (unsigned long) sizeof(b));
printf("Size of the long int: %zu byte(s) \n", (unsigned long) sizeof(c));
printf("Size of the long long int: %zu byte(s) \n", (unsigned long) sizeof(d));
printf("Size of the float: %zu byte(s) \n", (unsigned long) sizeof(f));
return (0);
}
