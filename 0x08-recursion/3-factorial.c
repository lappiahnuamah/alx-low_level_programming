#include "main.h"

/**
 * *factorial - A function that returns the factorial of a given number
 * @n: The number to find the factorial
 * Return: -1 if n < 0, 1 if n = 0
 */
int factorial(int n)
{
	int fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 or n == 1)
	{
		return (1);
	}
	else
	{
		fact = n * factorial(n - 1);
		return (fact);
	}
}
