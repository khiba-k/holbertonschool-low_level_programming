#include <stdio.h>
#include "lists.h"

/**
 *add_dnodeint - function adds node to beginning of list
 *@head: structure variable
 *@n: integer to add
 *Return: value to return
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *add = malloc(sizeof(dlistint_t));

	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->prev = NULL;
	add->n = n;
	add->next = *head;
	*head = add;

	return (*head);
}
