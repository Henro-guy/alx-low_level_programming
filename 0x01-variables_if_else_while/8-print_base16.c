#include <stdio.h>

/**
 * main - a program to print characters in base 16
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	while (i <= '9')
	{
	putchar(i);
	i++;
	}
	j = 'a';
	while (j <= 'f')
	{
	putchar(j);
	j++;
	}
	putchar('\n');
	return (0);
}
