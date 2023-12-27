#include "monty.h"
/**
 * _prepend - append node to the stack
 * @head: stack head
 * @n: new value
 */
void prepend(stack_t **head, int n)
{
	stack_t *new, *ptr;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error\n");
		exit (0);
	}
	ptr = *head;
	if (ptr != NULL)
		ptr->prev = new;
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;
}
