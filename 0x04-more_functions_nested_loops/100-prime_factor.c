#include "main.h"
#include <stdio.h>

/**
 * main - prints prime factors
 * Return: Always 0
 */
int main(void)
{
	long a, b;
	long number = 612852475143;
	double square = sqrt(number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			b = number / a;
		}
	}
	printf("%1d\n", b);

	return (0);
}
