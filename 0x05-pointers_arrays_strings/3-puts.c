#include "main.h"
/**
 * _puts -prints a string, followed by a new line,
 * @astr: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_puts(str[i]);
		i++;
	}

	_puts('\n');
}
