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
	unsigned int j = 0;

	if (head == NULL)
		return (NULL);
	if (index == j)
		return (head);
	while (j < index)
	{	
		head = head->next;
		j++;
	}
	return (head);
}
