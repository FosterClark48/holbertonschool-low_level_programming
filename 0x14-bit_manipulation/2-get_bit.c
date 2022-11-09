#include "main.h"
/**
*get_bit - gets bit value at given index
*@n: number given
*@index: index of a bit to get value from
*Return: value of bit at index given / -1 if error
*/
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned int) * 8))
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
