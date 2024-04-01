#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
	int i;

	ptr = malloc(sizeof(list_t));
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
	ptr->next = *head;

	*head = ptr;
	return (*head);
}

