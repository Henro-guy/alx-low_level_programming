#include <stdio.h>

/**
 * main - a program that prints combination of two numbers
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;

	i = '0';
	while (i < '9')
	{
	j = i + 1;
	while (j <= '9')
	{
	putchar(i);
	if (i != j)
	{
	putchar(j);
	if (i != '8' || j != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	j++;
	}
	i++;
	}
	putchar('\n');
	return (0);
}
