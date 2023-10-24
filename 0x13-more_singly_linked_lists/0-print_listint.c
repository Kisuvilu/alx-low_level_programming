#include "lists.h"
/**
 * print_listint - prints the int data in a singly linked list
 *
 * @h: is the head pointer to list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h);
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
