#include <stdio.h>
#include "lists.h"

/**
 *delete_dnodeint_at_index - function deletes node at index
 *@head: structure pointer
 *@index: the index of nod eto be delelted
 *Return: value to return
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *tmp_del, *tmp_head;

	if (!head || !*head)
		return (-1);
	tmp_head = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(tmp_head);
		return (1);
	}
	for ( ; index > 1 && tmp_head && tmp_head->next; index--)
		tmp_head = tmp_head->next;
	if (!tmp_head->next)
		return (-1);
	tmp_del = tmp_head->next;
	tmp_head->next = tmp_del->next ? tmp_del->next : NULL;
	if (tmp_del->next)
		tmp_del->next->prev = tmp_head;
	free(tmp_del);
	return (1);
}
