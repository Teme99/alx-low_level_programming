#include "main.h"

/**
 * _islower - check lowercase
 *
 *@n: type of the character
 *
 * Return: 1 if c is lowercase
 */

int _islower(int n)
{
	if (n >= 97 && n <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
