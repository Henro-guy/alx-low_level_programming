#include "main.h"

/**
 * _pow_recursion - a function that calculates power
 * @x: parameter of int type
 * @y: parameter of int type
 *
 * Return: the integer result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
	return (-1);
	}
	else if (y == 0)
	{
	return (1);
	}
	else
	{
	return (x * _pow_recursion(x, y - 1));
	}
}

