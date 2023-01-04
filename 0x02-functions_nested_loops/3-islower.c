#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: a parameter with integer return type is set
 *
 * Return: 1 if letter is lowercase, else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
