#include "main.h"
/**
*checkPrime - Checks a given number if its a prime number
*@n: number to evaluate
*@j: number to iterate
*Return: 1 if n is prime, 0 if not
*/
int checkPrime(int n, int j)
{
	if (j == 1)
	{
		return (1);
	}
	if (n % j == 0 && n > 0)
	{
		return (0);
	}
	return (checkPrime(n, j - 1));
}
/**
*is_prime_number - shows if int is prime or not
*@n: number to check if prime or not
*Return: 1 if n is prime, 0 if not
*/
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (checkPrime(n, n - 1));
}
