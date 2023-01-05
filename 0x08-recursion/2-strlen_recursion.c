#include "main.h"

/**
 * _strlen_recursion - a funtion that prints the stringlength
 * of a string
 * @s: the string to be checked for its length
 *
 * Return: int result
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s)
	{
	i++;
	i += _strlen_recursion(s + 1);
	}
	return (i);
}
