#include "lists.h"
#include <stdlib.h>

/**
 * list_len - function that returns the no of elements
 * @h: pointer
 * Return: always 0
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
