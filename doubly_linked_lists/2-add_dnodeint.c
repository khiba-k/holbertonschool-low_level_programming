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
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (add == NULL)
	{
		free(add);
		return (NULL);
	}
	add->prev = NULL;
	add->n = n;
	temp = *head;
	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}
	add->next = temp;
	if (temp != NULL)
		temp->prev = add;
	*head = add;
	return (*head);
}
