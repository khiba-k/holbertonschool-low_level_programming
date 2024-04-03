#include <stdio.h>
#include "lists.h"

/**
 *get_dnodeint_at_index - function returns the nth element
 *@head: structure pointer
 *@index: the index of the node
 *Return: value to be returned
*/
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;
		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
