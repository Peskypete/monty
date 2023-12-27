#include "monty.h"
/**
 * _append - Function to add node at the end of the stack
 * @head: stack head
 * @n: new value
 */
void append(stack_t **head, int n)
{
	stack_t *new, *ptr;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
	}
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (ptr)
	{
		while (ptr->next)
			ptr = ptr->next;
	}
	if (!ptr)
	{
		*head = new;
		new->prev = NULL;
	}
	else
	{
		ptr->next = new;
		new->prev = ptr;
	}
}
