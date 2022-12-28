#include <stdio.h>

/**
 * main - A program that prints the alphabet in lowercase
 * and then in uppercase using the putchar function
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
	i = 'A';
	while (i <= 'Z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');
	return (0);
}
