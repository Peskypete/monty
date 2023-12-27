#include "monty.h"
/**
 * _rotl - Function to rotate the stack
 * @head: Stack head
 * @counter: Line number
 */
void _rotl(stack_t **head, unsigned int counter)
{
	stack_t *tmp;
	stack_t *ptr;
	(void)counter;

	tmp = *head;
	if (*head == NULL || (*head)-> next == NULL)
	{
		return;
	}
	ptr = (*head)->next;
	ptr->prev = NULL;
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->prev =tmp;
	(*head)->next = NULL;
	(*head) = ptr;
}
