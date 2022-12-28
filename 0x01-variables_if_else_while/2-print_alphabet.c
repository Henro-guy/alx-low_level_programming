#include <stdio.h>

/**
 * main - a program that prints an alphabet in lowercase using the putchar
 * function
 *
 * Return: 0
 */
int main(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
