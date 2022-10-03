#include "holberton.h"
/**
*leet - Encoding function
*@s: Character string variable
*
*Return: s - returns string properly
*/
char *leet(char *s)
{
	int i;
	int n;
	char alpha[] = "AEOTLaeotl";
	char num [] = "4307143071";

	for (i = 0; s[i]; i++)
	{
		for (n = 0; alpha[n]; n++)

			if (s[i] == alpha[n])
			{
				s[i] = num[n];
			}
	}

	return (s);
}
