#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 *add_node_end - function adds node to end of list
 *@head: structure variable
 *@str: new string
 *Return: value to be returned
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *ptr = malloc(sizeof(list_t));
	list_t *pointr;

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr->str = strdup(str);
	if (ptr->str == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		;
	ptr->len = i;
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (*head);
	}

	pointr = *head;
	while (pointr->next != NULL)
	{
		pointr = pointr->next;
	}
	pointr->next = ptr;

	return (*head);
}
