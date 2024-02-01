#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: parameter head
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t a = 0;


	while (h != NULL)
	{
		a++;

		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
	}
	return (a);
}
