#include "monty.h"
/**
 * _pall - prints the stack
 * @head: head of the stack
 * @counter: unused
 */
void _pall(stack_t **head, unsigned int counter)
{
	stack_t *ptr;
	(void)counter;

	ptr = *head;
	if (ptr == NULL)
		return;
	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
}
