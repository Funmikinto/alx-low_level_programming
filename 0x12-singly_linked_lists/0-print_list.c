#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - function that prints all the elements
 * @h: pinter
 * Return: always 0
 */

size_t print_list(const list_t *h)
{       
        size_t s = 0;
        
        while (h)
        {       
                if (!h->str)
                        printf("[0] (nil)\n");
                else
                        printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
