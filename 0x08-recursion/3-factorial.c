#include "main.h"

/**
 * factorial - factorial of int
 * @n: parameter to be checked
 *
 * Return: int val
 */
int factorial(int n)
{
	int i;

	if (n == 0)
	{
	return (1);
	}
	else if (n < 0)
	{
	return (-1);
	}
	else
	{
	i = n * factorial(n - 1);
	}
	return (i);
}
