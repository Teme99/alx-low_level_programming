#include "main.h"

/**
 * _abs - get the absolute value
 *
 * @n: int type number
 *
 * Return: n's absolute value
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
