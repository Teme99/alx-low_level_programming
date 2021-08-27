#include <stdio.h>
#include <unistd.h>
/**
 * main - where excution starts
 *
 * Return: 0 for success
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');

return (0);
}
