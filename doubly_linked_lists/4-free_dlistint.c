#include <stdio.h>
#include "lists.h"

/**
 *dlistint_t - function frees up space
 *@head: structure pointer
 *Return: value to return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *freeup;

	if (head != NULL)
		while (head->prev != NULL)
			head = head->prev;

	while ((freeup = head) != NULL)
	{
		head = head->next;
		free(freeup);
	}

}
