#include "main.h"

/**
 * print_last_digit - print last digit of number
 *
 * @n: number type
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
	{
		last_digit = -1 * (n % 10);
		_putchar(last_digit + 48);
		return (last_digit);
	}
	else
	{
		last_digit = n % 10;
		_putchar(last_digit + 48);
		return (last_digit);
	}
}
