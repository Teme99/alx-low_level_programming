#include "main.h"

/**
 * _islower - check if it is lowercase
 *
 * Return: 1 if isLower is true 
 */

int _islower(int c)
{
	if (c >= 97 && c <= 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
