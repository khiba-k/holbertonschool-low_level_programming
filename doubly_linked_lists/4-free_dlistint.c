#include <stdio.h>
#include "lists.h"

/**
 * 
 * 
 * 
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
