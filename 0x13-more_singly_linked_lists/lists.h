#ifndef _LISTS_H_
#define _LISTS_H_

/**
 * struct listint_t -self referencial struc
 * for  creating nodes of a singly linked list
 *
 * @n: of integer data
 * @next:  self referencial pointer
 * pointer to the next mode of a list
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);

#endif
