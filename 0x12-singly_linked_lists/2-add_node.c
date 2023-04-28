#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - function that adds a new node
 * @head: double pointer to the list_line
 * @str: new string
 * Return: always 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t n;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);

	for (n = 0 ; str[n] ; n++)
		;
	new_node->len = n;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
