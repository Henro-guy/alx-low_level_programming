#include "main.h"

/**
 * jack_bauer - a function that prints every minuite of the
 * day of Jack Bauer.
 *
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i < 24; i++)
	{
	for (j = 0; j <= 59; j++)
	{
	_putchar((i / 10) + 48);
	_putchar((i % 10) + 48);
	_putchar(':');
	_putchar((j / 10) + 48);
	_putchar((j % 10) + 48);
	_putchar('\n');
	}
	}
}
