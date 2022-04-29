#include "main.h"

/**
 * _put_recursion - prints a string, followd by a new line
 * @s: string
 * Description: This is the first program
 * Return: no return
 *
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
