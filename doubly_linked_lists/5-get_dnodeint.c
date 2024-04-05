#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - function returns the nth element
 *@head: structure pointer
 *@index: the index of the node
 *Return: value to be returned
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for ( ; index > 0 && head->next; index--)
		head = head->next;
	return (index > 0 ? NULL : head);
}
