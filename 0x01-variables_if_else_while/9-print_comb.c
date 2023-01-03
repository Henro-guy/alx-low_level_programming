#include <stdio.h>

/**
 * main - a program that prints all combinations of
 * ingle digit numbers using putchar 4 times
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
	if (i != '9')
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	putchar('\n');
	return (0);
}
