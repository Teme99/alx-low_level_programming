#include "main.h"

/**
 * main - where execution starts
 *
 * Return: 0 for success
 */

int main(void)
{
	char n[] = "_putchar";
	int i = 0;

	while (n[i] != '\0')
	{
		_putchar(n[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
