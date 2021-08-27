#include <stdio.h>
#include <unistd.h>
/**
 * main - where excution starts
 * 
 * Return: 0 for success
 */
int main(void)
{
	char a;
	char b = '0';

	for (b = 0; b <= 9; b++)
	{
		putchar(b + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

return (0);
}
