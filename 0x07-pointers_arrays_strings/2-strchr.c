#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string
 * @c: string
 * Return: the pointer to the first occuranc eof the character c
 */

char *_strchr(char *s, char c)
{
unsigned int i = 0;

for (; *(s + 1) != '\0'; i++)
	if (*(s + i) == c)
		return (s + i);
if (*(s + i) == c)
	return (s + i);
return ('\0');
}