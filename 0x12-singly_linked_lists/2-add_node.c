#include "lists.h"
/**
 * add_node - adds a new node at the beginning of list_t list
 * @head: parameter head
 * @str: string to add to list_t list
 * Return: address of new list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n =  malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	if (n->str == NULL)
	{
		free(n);
		return (NULL);
	}
	n->len = string_length(str);
	n->next = (*head);
	(*head) = n;
	return (*head);
}
/**
 * string_length - finds string length
 * @a: pointer string
 * Return: length of string
 */
int string_length(const char *a)
{
	int i = 0;

	for (i = 0; a[i]; i++)
		continue;
	return (i);
}
