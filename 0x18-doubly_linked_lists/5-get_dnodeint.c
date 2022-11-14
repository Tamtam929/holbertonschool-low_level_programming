#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node in a list
 * @head: pointer to the head of a list
 * @index: the index of the node we want to return
 * Return: pointer to the correct node, if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
