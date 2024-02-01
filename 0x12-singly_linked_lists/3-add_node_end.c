#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: parameter head
 * @str: string
 * Return: pointer to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *temp = *head;
	unsigned int length = 0;

	while (str[length])
		length++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = length;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
		}

	while (temp->next)
	temp = temp->next;

	temp->next = n;

	return (n);
}
