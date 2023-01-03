#include <stdio.h>

/**
 * main - a program that prints two-two
 * combinations of digits
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 98)
	{
	b = a + 1;
	while (b <= 99)
	{
	if (a != b)
	{
	putchar((a / 10) + 48);
	putchar((a % 10) + 48);
	putchar(' ');
	putchar((b / 10) + 48);
	putchar((b % 10) + 48);
	if (a != 98 || b != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	b++;
	}
	a++;
	}
	putchar('\n');
	return (0);
}
