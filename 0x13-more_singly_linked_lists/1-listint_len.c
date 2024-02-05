#include "lists.h"
/**
 * listint_len - returns the number of elements in listint_t list
 * @h: linked list to print
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		h = h->next;
        a++;
	}
	return (a);
}

