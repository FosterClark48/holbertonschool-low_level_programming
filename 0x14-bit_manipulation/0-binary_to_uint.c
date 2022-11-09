#include "main.h"
/**
*binary_to_uint - converts binary to unsigned int
*@b: points to a string of binary chars to convert
*Return: binary value of unsigned int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, x = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '0')
		{
			x = x << 1;
		}
		if (b[i] == '1')
		{
			x = (x << 1) + 1;
		}
		i++;
	}
	return (x);
}
