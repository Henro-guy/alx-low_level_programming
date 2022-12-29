#include <stdio.h>

/**
 * main - a program that prints alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 'z';
	while (i >= 'a')
	{
	putchar(i);
	i--;
	}
	putchar('\n');
	return (0);
}
