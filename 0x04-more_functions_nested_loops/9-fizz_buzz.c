#include <stdio.h>
/**
*main - Entry Function
*
*Return: 0 = Success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz ");

		else if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
			printf("Buzz ");

		else
			printf("%d\n", i);
	}
	return (0);
}
