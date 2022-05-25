#include "lists.h"

/**
 * list_len - returns the no of elements in a list
 * @h: singly linked list
 * Return: no of elements in the list
 */

size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;

	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
