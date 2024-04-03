#include <stdio.h>
#include "lists.h"

/**
 *insert_dnodeint_at_index - function inserts index
 *@h: structure pointer
 *@idx: where to insert
 *@n: integer to add
 *Return: value to return
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (!tmp)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = tmp;
		tmp->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && tmp->next; idx--)
		tmp = tmp->next;
	if (idx > 1 && !tmp->next)
		return (NULL);
	new->prev = tmp;
	new->next = tmp->next ? tmp->next : NULL;
	if (tmp->next)
		tmp->next->prev = new;
	tmp->next = tmp->next && idx > 1 ? NULL : new;
	return (new);
}
