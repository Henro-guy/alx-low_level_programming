#include "main.h"

/**
 * print_last_digit - function that prints the last digit
 * of a number
 * @n: the parameter to be checked
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int res = n % 10;

	if (n >= 0)
	{
	_putchar(res + '0');
	}
	if (n < 0)
	{
	res *= -1;
	_putchar(res + '0');
	}
	return (res);
}
