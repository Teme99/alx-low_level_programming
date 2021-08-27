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

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
	}
	putchar('\n');

return (0);
}
