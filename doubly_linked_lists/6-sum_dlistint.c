#include <stdio.h>
#include "lists.h"

/**
 *sum_dlistint - function returns the nth element
 *@head: structure pointer
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
