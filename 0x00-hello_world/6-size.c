#include <stdio.h>
/**
 * main - prints size of var types
 * return: always 0
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	/* sizeof evaluates the size of a variable */
	printf("Size of char: %d byte(s)\n", sizeof(a));
	printf("Size of int: %d byte(s)\n", sizeof(b));
	printf("Size of long int: %d byte(s)\n", sizeof(c));
	printf("Size of long long int: %d byte(s)\n", sizeof(d));
	printf ("Size of float: %d byte(s)\n", sizeof(e));

	return (0);
}
