#include <stdio.h>

/**
 * main: where execution starts
 *
 * Description: fib numbers until the fib value itself
 * 
 * Return: 0 for success
 */

int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
	return (0);
}
