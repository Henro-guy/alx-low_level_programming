#include <stdio.h>

/**
 * main - a program that prints the combination of three
 * digits using the putchar function
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;
	int c;

	a = '0';
	while (a < '8')
	{
	b = a + 1;
	while (b < '9')
	if (a != b)
	{
	c = b + 1;
	while (c <= '9')
	{
	if (a != c && b != c)
	{
	putchar(a);
	putchar(b);
	putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	c++;
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
