#include <stdio.h>

/**
 * main - a program that prints the lowercae letters
 * except e and q
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int e;
	int q;

	e = 'e';
	q = 'q';
	i = 'a';
	while (i <= 'z')
	{
	if (i != e && i != q)
	{
	putchar(i);
	}
	i++;
	}
	putchar('\n');
	return (0);
}
