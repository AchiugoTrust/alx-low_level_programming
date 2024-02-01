#include "lists.h"
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: parameter head
 * @str: string to add to list_t list
 * Return: address of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = length;
	n->next = (*head);
	(*head) = n;

	return (*head);
}
