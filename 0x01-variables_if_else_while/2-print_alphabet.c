#include <stdio.h>

/**
 * main - where excution starts
 *
 * Return: 0 for success
 */
int main(void)
{
	char c;
	int i;

	i = 0;
	c = 'a';
	while (i < 26)
	{
		putchar(c + i);
		i++;
	}
	putchar(10);
	return (0);
}
