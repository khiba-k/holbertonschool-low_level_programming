#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint_end - function adds node to the end of list
 *@head: structure variable
 *@n: integer to add to list
 *Return: value to return
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *add;
	dlistint_t *temp;

	add = malloc(sizeof(dlistint_t));
	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->n = n;
	add->next = NULL;

	temp = *head;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = add;
	}
	else
	{
		*head = add;
	}
	add->prev = temp;

	return (add);
}
