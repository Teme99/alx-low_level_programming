#include "main.h"

/**
 * main - where excution starts
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char s[] = "_putchar";
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar(10);

	return (0);
}
