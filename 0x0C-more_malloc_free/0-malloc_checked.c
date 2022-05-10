#include <stdlib>
#include "main.h"

/**
 * malloc_checked - allocated memory using malloc
 * @b: size of memoory to be allocated
 * Return: pointer to the allocated memory
 * 98 if insufficent memory was available
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
