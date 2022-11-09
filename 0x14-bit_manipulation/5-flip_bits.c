#include "main.h"
/**
*flip_bits - counts bits needed to be flipped
*@n: number given
*@m: number given to compare
*Return: count of bit difference
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		count++;
		x &= x - 1;
	}

	return (count);
}
