#include "main.h"

/**
 * _isalpha - a functin that checks for alphabetic character
 * @c: parameter to be checked
 *
 * Return: 1 if it is a letter in any case, else 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
