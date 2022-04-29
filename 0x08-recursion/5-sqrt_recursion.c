#include "main.h"

/**
 * power_operation - returns the matural swaure root of a number
 * @n: input number
 * @c: iterator
 * Return: square root of -1
 */

int power_operation(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c *(n / c) == n)
			return (c);
		else
			return (-1);
	}
	return (0 + power_operation(n, c + 1));
}
