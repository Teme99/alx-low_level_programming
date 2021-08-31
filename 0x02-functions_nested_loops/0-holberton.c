#include<stdio.h>
#include "main.h"
/**
 * main - where execution starts
 *
 * Return: 0 for success
 */
int main(void)

{

char c[10] = "_putchar";
int i;
for (i = 0; i <= 8; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
