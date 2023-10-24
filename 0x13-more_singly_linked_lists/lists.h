#ifndef _LISTS_H_
#define _LISTS_H_


#include<stdio.h>
#include<stdlib.h>
/**
 * struct listint_t -self referencial struct
 * Used to make nodes of a singly linked list
 *
 * @n: of integer data type
 * @@next: is self referencial pointer used to point to the next node
 * Alx  singly linked list node structure project.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

Size_t print_listint(const listint_t *h);

#endif
