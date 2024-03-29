#include "lists.h"
/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list
 * @head: first node
 * @index: index of node
 * Return: pointer to node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp = head;

	for (i = 0; i <= index; i++)
	{
		if (temp == NULL)
			return (NULL);
		if (i != index)
			temp = temp->next;
	}
	return (temp);
}
