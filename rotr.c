#include "monty.h"
/**
 * _rotr - Rotates the stack to the bottom
 * @head: stack head
 * @counter: line number;
 */
void _rotr(stack_t **head, unsigned int counter)
{
	stack_t *current, *ptr;
	(void)counter;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	ptr = *head;
	while (ptr->next != NULL)
		ptr = ptr->next;
	current = ptr->prev;
	current->next = NULL;
	ptr->prev = NULL;
	ptr->next = *head;
	(*head)->prev = ptr;
	*head = ptr;
}
