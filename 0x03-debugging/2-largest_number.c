#include "main.h"
/**
 * big_num - outputs the biggest number
 * @a: int 1
 * @b: int 2
 * @c: int 3
 * Return: the biggest number
 */

int big_num(int a, int b, int c)
{
int largest;
if (a >= b && a > c)
{
largest = a;
}
else if (b >= a && b > c)
{
largest = b;
}
else
{
largest = c;
}

return (largest);
}
