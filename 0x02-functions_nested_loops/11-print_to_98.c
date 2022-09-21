#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - Prints numbers to 98
 *@n:Starting point on our way to 98
 *Return: void
 */
void print_to_98(int n)
{
	printf("%i", n);
	while (n != 98)
	{
		if (n > 98)
			n--;
		else
			n++;
		printf(", %i", n);
	}
	printf("\n");
}
