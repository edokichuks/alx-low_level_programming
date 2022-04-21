#include "main.h"
/**
 * print_rev - prints reversed string to the string to print
 * @s: ponter to the strin to print
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	while (i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
