fndef LISTS_H
#define LISTS_H
#include <stddef.h>
#include <stdlib.h>
/*
 * Desc: Header file containing prototypes and definitions for all functions
 */

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

#endif /* LISTS_H */
