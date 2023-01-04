#include "main.h"

/**
 * print_alphabet_x10 - aprogram that prints the
 * alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int i;
	char l;

	i = 0;
	while (i <= 9)
	{
	l = 'a';
	while (l <= 'z')
	{
	_putchar(l);
	l++;
	}
	_putchar('\n');
	i++;
	}
}
