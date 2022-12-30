#include <stdio.h>

/**
 * main - a program that prints single digit
 * numbers using the putchar function
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = '0';
	while (i <= '9')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
