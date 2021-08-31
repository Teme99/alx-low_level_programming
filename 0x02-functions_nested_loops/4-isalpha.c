#include "main.h"

/**
 * _isalpha - checks lowercase existance
 *
 * @n: type of character
 *
 * Return: 1 if n is 1 and 0 other wise
 */

int _isalpha(int n)
{
	if ((n >= 97 && n <= 123) || (n >= 65 && n <= 91))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
