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
	unsigned int i = 0;
	dlistint_t *add;
	dlistint_t *temp;

	add = malloc(sizeof(dlistint_t));
	add->prev = NULL;
	add->n = n;
	add->next = NULL;

	if (add)
	{
		add->n = n;
		if (idx == 0)
		{
			if (*h)
			{
				add->next = *h;
				(*h)->prev = add;
			}
			*h = add;
			return (add);
		}
		while (i < idx - 1 && temp)
		{
			temp = temp->next;
			i++;
		}
		if (temp)
		{
			if (temp->next)
				temp->next->prev = add;
			add->next = temp->next;
			add->prev = temp;
			temp->next = add;
			return (add);
		}
	}
	return (NULL);
}
