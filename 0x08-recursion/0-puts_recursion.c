#include "main.h"

/**
*_puts_recursion - prints a string, followd by a new line
*@s: string
*Description: This is the first program
*Return: no retur
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
